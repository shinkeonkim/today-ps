#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ull N,k,t,cls[1100],M,stu[11000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for(int y=0; y<N; y++) {
        cin >> k;
        for(int x = 0; x<k; x++) {
            cin >> t;
            cls[y] |= (1llu<<t);
        }
    }

    cin >> M;
    for(int y=0; y<M; y++) {
        cin >> k;
        for(int x = 0; x<k; x++) {
            cin >> t;
            stu[y] |= (1llu<<t);
        }
    }

    for(int x1=0; x1<M; x1++) {
        int ans = 0;
        for(int x2=0; x2 <N; x2++) {
            if((cls[x2] & stu[x1]) == cls[x2]) {
                ans++;
            }
        }
        cout << ans << "\n";
    }
}