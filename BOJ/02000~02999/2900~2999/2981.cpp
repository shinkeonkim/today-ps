#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N;
int ar[110];
vector<int> V;
vector<int> ans;
int G;

int gcd(int a,int b) {
    return b>0?gcd(b,a%b):a;
}

int main() {
    cin >> N;
    for(int x = 0; x < N; x++) cin >> ar[x];
    sort(ar,ar+N);
    for(int x = 0; x < N; x++) {
        for(int y = 1; y < N; y++) {
            V.push_back(ar[y] - ar[x]);
        }
    }
    G = V[0];
    for(auto i : V) {
        G = gcd(G,i);
    }
    ans = {G};

    for(int x=2; x*x <= G; x++) {
        if(G % x == 0) {
            ans.push_back(x);
            if(G != x*x) {
                ans.push_back(G/x);
            }
        }
    }
    sort(ans.begin(),ans.end());
    for(auto i:ans) {
        cout << i << " ";   
    }

}