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
  Point() : x(0), y(0) {}
  Point(double x, double y) : x(x), y(y) {}
};

Point get_average_point(vector<Point>& points) {
  Point ret;
  int len = points.size();

  for(auto p : points) {
    ret.x += p.x;
    ret.y += p.y;
  }
  ret.x /= len;
  ret.y /= len;

  return ret;
}

double get_distance(Point& a, Point& b) {
  return (a.x - b.x)*(a.x - b.x) + (a.y - b.y) * (a.y - b.y);
}

Point get_farest_point(vector<Point>& points, Point crt) {
  Point ret = Point(crt.x, crt.y);
  for(auto p : points) {
    if(get_distance(p, crt) > get_distance(ret, crt)) {
      ret = Point(p.x, p.y);
    }
  }
  return ret;
}

int gen = 5000000;
double learning_rate = 1;

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int n;
  vector<Point> points;
  vector<Point> extras;
  
  while(true) {
    cin >> n;
    if(n == 0) break;

    Point tmp;
    for1(0, n) {
      string z;
      cin >> tmp.x >> tmp.y >> z;
      if(z == "I") {
        points.push_back(tmp);
      }
      else {
        extras.push_back(tmp);
      }
    }

    Point current = get_average_point(points);

    for1(0, gen) {
      Point farest_point = get_farest_point(points, current);
      current.x = current.x + (farest_point.x - current.x) * learning_rate;
      current.y = current.y + (farest_point.y - current.y) * learning_rate;
      learning_rate *= 0.99999;
    }

    Point farest_point = get_farest_point(points, current);

    cout << fixed;
    cout.precision(5);

    cout << sqrt(get_distance(farest_point, current)) << "\n";
  }
}