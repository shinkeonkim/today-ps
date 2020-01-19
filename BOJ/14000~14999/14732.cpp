#include <iostream>
using namespace std;
int N,x1,y1,x2,y2,ans;
int M[550][550];
int main() {
    cin >> N;
    for(int i = 0; i <N; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        for(int y = y1; y< y2; y++) {
            for(int x = x1; x<x2; x++) {
                M[y][x] =1;
            }
        }
    }
    for(int x = 0; x<500; x++) {
        for(int y = 0; y<500; y++) {
            ans += M[y][x];
        }
    }
    cout<<ans;  
}