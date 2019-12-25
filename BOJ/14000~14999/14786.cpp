#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
double a,b,c;
double ans = 0;
int cnt = 1000000;
int main() {
    cin >> a >> b >> c;
    while(cnt--) {
        double f_prime_x = a + b*cos(ans);
        double f_x = a * ans + b * sin(ans) - c;
        ans = (f_prime_x*ans - f_x) / f_prime_x;
    }
    printf("%.6f",ans+0.0000005);

}