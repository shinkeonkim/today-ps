#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N,s=1,e=3000000000ll,mid;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N;

    
    while(s<=e) {
        mid = (s+e) / 2;
        if(mid % 3 ==0 || mid % 5 ==0) {
            s-=2;
            e+=7;
            continue;
        }
        ll count = mid/3 + mid/5 - mid/15;
        if(mid - count == N) {
            cout << mid;
            return 0;
        }
        if(mid - count > N) e = mid -1;
        else s = mid +1;
    }
    
}