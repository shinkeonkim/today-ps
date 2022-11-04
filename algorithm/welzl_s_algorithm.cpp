#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int> > iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull> > ullv2;

struct Point {
  double x, y;

  Point subtract(const Point &p) const {
    return Point{x - p.x, y - p.y};
  }

  double distance(const Point &p) const {
    return hypot(x - p.x, y - p.y);
  }

  double cross(const Point &p) const {
    return x*p.y - y*p.x;
  }
};

struct Circle {
  Point center;
  double r;

  static const Circle INVALID;
  static const double MULTIPLICATIVE_EPSILON;

  bool contains(const Point &p) const {
    return center.distance(p) <= r * MULTIPLICATIVE_EPSILON;
  }

  bool contains(const vector<Point> &points) const {
    for(const Point &p : points) {
      if(!contains(p)) return false;
    }
    return true;
  }
};

const Circle Circle::INVALID{Point {0, 0}, -1};
const double Circle::MULTIPLICATIVE_EPSILON = 1 + 1e-14;
static default_random_engine gen((std::random_device())());

Circle getDiameter(const Point &a, const Point &b);
Circle getMinimumEnclosingCircle(vector<Point> points);
Circle getMinimumEnclosingCircleByOnePoint(const vector<Point> &points, size_t end, const Point &p);
Circle getMinimumEnclosingCircleByTwoPoints(const vector<Point> &points, size_t end, const Point &p, const Point &q);
Circle getCircleByThreePoints(const Point &a, const Point &b, const Point &c);

Circle getDiameter(const Point &a, const Point &b) {
  Point c{(a.x + b.x)/2, (a.y + b.y) / 2};

  return Circle{c, max(c.distance(a), c.distance(b))};
}

Circle getMinimumEnclosingCircle(vector<Point> points) {
  // Get Minumum Enclosing Circle

  shuffle(points.begin(), points.end(), gen);

  Circle c = Circle::INVALID;

  for(size_t i = 0; i < points.size(); i++) {
    const Point &p = points.at(i);

    if(c.r < 0 || !c.contains(p)) {
      c = getMinimumEnclosingCircleByOnePoint(points, i+1, p);
    }
  }
  return c;
}

Circle getMinimumEnclosingCircleByOnePoint(const vector<Point> &points, size_t end, const Point &p) {
  Circle c{p, 0};

  for(size_t i = 0; i < end; i++) {
    const Point &q = points.at(i);

    if(!c.contains(q)) {
      if(c.r == 0) c = getDiameter(p, q);
    } else {
      c = getMinimumEnclosingCircleByTwoPoints(points, i+1, p, q);
    }
  }
  return c;
}

Circle getMinimumEnclosingCircleByTwoPoints(const vector<Point> &points, size_t end, const Point &p, const Point &q) {
  Circle ret = getDiameter(p, q);

  Circle left = Circle::INVALID;
  Circle right = Circle::INVALID;

  Point pq = q.subtract(p);

  for(size_t i = 0; i < end; i++) {
    const Point &r = points.at(i);
    if(ret.contains(r)) continue;

    double cross = pq.cross(r.subtract(p));
    Circle c = getCircleByThreePoints(p, q, r);
		if (c.r < 0) continue;
		else if (cross > 0 && (left.r < 0 || pq.cross(c.center.subtract(p)) > pq.cross(left.center.subtract(p))))
			left = c;
		else if (cross < 0 && (right.r < 0 || pq.cross(c.center.subtract(p)) < pq.cross(right.center.subtract(p))))
			right = c;
  }

  if(left.r < 0 && right.r < 0) return ret;
  else if(left.r < 0) return right;
  else if(right.r < 0) return left;
  else return left.r <= right.r ? left : right;
}

Circle getCircleByThreePoints(const Point &a, const Point &b, const Point &c) {
  double ox = (min(min(a.x, b.x), c.x) + max(max(a.x, b.x), c.x)) / 2;
	double oy = (min(min(a.y, b.y), c.y) + max(max(a.y, b.y), c.y)) / 2;
	double ax = a.x - ox,  ay = a.y - oy;
	double bx = b.x - ox,  by = b.y - oy;
	double cx = c.x - ox,  cy = c.y - oy;
	double d = (ax * (by - cy) + bx * (cy - ay) + cx * (ay - by)) * 2;
	if (d == 0)
		return Circle::INVALID;
	double x = ((ax*ax + ay*ay) * (by - cy) + (bx*bx + by*by) * (cy - ay) + (cx*cx + cy*cy) * (ay - by)) / d;
	double y = ((ax*ax + ay*ay) * (cx - bx) + (bx*bx + by*by) * (ax - cx) + (cx*cx + cy*cy) * (bx - ax)) / d;
	Point p{ox + x, oy + y};
	double r = max(max(p.distance(a), p.distance(b)), p.distance(c));
	return Circle{p, r};
}


int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  ll N;
  vector<Point> points;

  cin >> N;
  
  for1(0, N) {
    Point tmp;
    cin >> tmp.x >> tmp.y;
    points.push_back(tmp);
  }

  Circle ret = getMinimumEnclosingCircle(points);

  cout << ret.r;
}