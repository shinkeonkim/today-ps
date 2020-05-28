#include <bits/stdc++.h>

#define SIZE 3001

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

bool ar[3300];
int prime[3300];
int cnt;
int N;
int input[5500000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    fill(ar,ar+SIZE,true);

    ar[0] = ar[1] = false;
    prime[cnt++] = 2;
    for(int x=3; x<SIZE; x+=2) {
        if(ar[x]) {
            prime[cnt++] = x;
            for(int y = x+x; y<SIZE; y+=x) {
                ar[y] = false;
            }
        }
    }

    cin >> N;
    for(int x=0; x<N; x++) cin >> input[x];
    
    for(int x=0; x<N; x++) {
        for(int y =0; y<cnt && input[x] >= prime[y]; y++) {
            while(input[x] >= prime[y] && input[x] % prime[y] == 0) {
                cout << prime[y] << " ";
                input[x] /= prime[y];
            }
        }

        if(input[x] > 1) cout << input[x] << " ";
        cout<<"\n";
    }
}