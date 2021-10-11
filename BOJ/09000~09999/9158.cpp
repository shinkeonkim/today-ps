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
  double x, y, z;
  Point() : x(0), y(0), z(0) {}
  Point(double x, double y, double z) : x(x), y(y), z(z) {}
};

Point get_average_point(vector<Point>& points) {
  Point ret;
  int len = points.size();

  for(auto p : points) {
    ret.x += p.x;
    ret.y += p.y;
    ret.z += p.z;
  }
  ret.x /= len;
  ret.y /= len;
  ret.z /= len;

  return ret;
}

double get_distance(Point& a, Point& b) {
  return (a.x - b.x)*(a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z);
}

Point get_farest_point(vector<Point>& points, Point crt) {
  Point ret = Point(crt.x, crt.y, crt.z);
  for(auto p : points) {
    if(get_distance(p, crt) > get_distance(ret, crt)) {
      ret = Point(p.x, p.y, p.z);
    }
  }
  return ret;
}

int gen = 2000000;
double learning_rate = 1;

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n;
  vector<Point> points;
  
  while(true) {
    cin >> n;
    if(n == 0) break;
    points.clear();

    Point tmp;
    for1(0, n) {
      cin >> tmp.x >> tmp.y >> tmp.z;
      points.push_back(tmp);
    }

    Point current = get_average_point(points);

    double ans = 99999;

    for1(0, gen) {
      Point farest_point = get_farest_point(points, current);
      ans = min(ans, get_distance(current, farest_point));
      current.x = current.x + (farest_point.x - current.x) * learning_rate;
      current.y = current.y + (farest_point.y - current.y) * learning_rate;
      current.z = current.z + (farest_point.z - current.z) * learning_rate;
      learning_rate *= 0.9999999;
    }
    Point farest_point = get_farest_point(points, current);
    ans = min(ans, get_distance(current, farest_point));

    cout << fixed;
    cout.precision(5);

    cout << sqrt(ans) << "\n";
  }
}