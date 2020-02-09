#include <iostream>
#include <cstdio>
using namespace std;

double ar[11000],Max;
int N;
int main() {
    cin >> N;
    for(int x =1; x<=N; x++) cin >> ar[x];
    Max = ar[1];
    for(int x=1; x<=N; x++) {
        double c = ar[x];
        if(c>Max) Max=c;
        for(int y=x+1; y<=N; y++) {
            c*=ar[y];
            if(c>Max) Max=c;
        }
    }
    printf("%.3f",Max);
}