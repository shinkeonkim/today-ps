#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N,K,A,sq,ans,mid;

ll temp[70000];
ll mo_temp[70000];
ll ar[330000];

void getMiddle() {
    ll mo_pos=0;
    ll pos = 0;
    ll S = 0;
    for(int x=0; x<=sq; x++) {
        if(S+mo_temp[x] >= mid) {
            mo_pos = x;
            break;
        }
        S += mo_temp[x];
    }
    for(int x=sq*mo_pos; x <sq*(mo_pos+1); x++) {
        if(S + temp[x] >= mid) {
            pos = x;
            break;
        }
        S += temp[x];
    }
    ans += pos;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N >> K;
    mid = (K+1)/2;
    for(sq = 1; sq*sq <=67000; sq++);
    for(int x=0; x<K; x++) {
        cin >> ar[x];
        temp[ar[x]]++;
        mo_temp[ar[x]/sq]++;
    }
    getMiddle();
    for(int x=K; x<N; x++) {
        cin >> ar[x];
        temp[ar[x-K]]--;
        mo_temp[ar[x-K]/sq]--;
        temp[ar[x]]++;
        mo_temp[ar[x]/sq]++;
        getMiddle();
    }
    cout << ans;
}