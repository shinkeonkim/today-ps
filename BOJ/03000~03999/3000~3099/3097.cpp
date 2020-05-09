#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

int N;
int X[33],Sx;
int Y[33],Sy;
int ans;

int dist(int x1,int y1,int x2,int y2) {
    return (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << fixed;
    cout.precision(2);

    cin >> N;
    for(int x=0; x<N; x++) {
        cin >> X[x] >> Y[x];
        Sx += X[x];
        Sy += Y[x];
    }    

    cout << Sx <<" " <<Sy <<"\n";
    
    ans = dist(0,0,Sx-X[0],Sy-Y[0]);
    for(int x=1; x<N; x++) {
        ans = min(ans,dist(0,0,Sx-X[x],Sy-Y[x]));
    }
    cout << sqrt(ans);

}