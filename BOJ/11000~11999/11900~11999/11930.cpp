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
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

struct Point {
    double x, y, z;
    Point() : x(0), y(0), z(0) {}
    Point(double x, double y, double z) : x(x), y(y), z(z) {}
};

Point getAveragePoint(Point* array, ll len) {
    Point ret = Point(0, 0, 0);
    for1(0, len) {
        ret.x += array[i].x;
        ret.y += array[i].y;
        ret.z += array[i].z;
    }
    ret.x/=len;
    ret.y/=len;
    ret.z/=len;
    return ret;
}

double getDistance(Point a, Point b) {
    return (a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y) + (a.z- b.z) * (a.z - b.z);
}

Point getFarestPoint(Point* array, ll len, Point crt) {
    Point ret = Point(crt.x, crt.y, crt.z);
    for1(0, len) {
        if(getDistance(array[i], crt) > getDistance(ret, crt)) {
            ret = Point(array[i].x , array[i].y, array[i].z);
        }
    }
    return ret;
}

ll N;
Point ar[1100];
ll gen = 50000;
double learning_rate = 1;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for1(0, N) {
        cin >> ar[i].x >> ar[i].y >> ar[i].z;
    }   

    Point current = getAveragePoint(ar, N);

    for1(0, gen) {
        Point farPoint = getFarestPoint(ar, N, current);
        current.x = current.x + (farPoint.x - current.x) * learning_rate;
        current.y = current.y + (farPoint.y - current.y) * learning_rate;
        current.z = current.z + (farPoint.z - current.z) * learning_rate;
        learning_rate *= 0.999;
    }

    Point farPoint = getFarestPoint(ar, N, current);
    cout << fixed;
    cout.precision(2);
    cout << sqrt(getDistance(current, farPoint));
}