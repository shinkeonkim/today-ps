#include <iostream>
using namespace std;
typedef long long ll;
int tc;
ll A,B,i;
ll a[11];
ll b[11];

int main() {
    freopen("input.txt","r",stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> tc;
    while(tc--) {
        for(int x=0; x<10; x++) a[x]=b[x]=0;
        cin >> A;
        for(int x=0; x<A; x++) {
            cin >> i;
            ll idx = i/32;
            ll z = i%32;
            a[idx] |= (1 << z);
        }

        cin >> B;
        for(int x=0; x<B; x++) {
            cin >> i;
            ll idx = i/32;
            ll z = i%32;
            b[idx] |= (1 << z);
        }

        // 교집합
        int cnt = 0;
        for(int y =0; y<6; y++) {
            for(int x=0; x<32; x++) {
                if((a[y] & (1<<x)) && (b[y] & (1<<x))) {
                    cnt++;
                }
            }
        }
        cout << cnt << " ";
        for(int y =0; y<6; y++) {
            for(int x=0; x<32; x++) {
                if((a[y] & (1<<x)) && (b[y] & (1<<x))) {
                    // cnt++;
                    cout << y*32+x << " ";
                }
            }
        }
        cout << "\n";

        // 합집합
        cnt = 0;
        for(int y =0; y<6; y++) {
            for(int x=0; x<32; x++) {
                if((a[y] & (1<<x)) || (b[y] & (1<<x))) {
                    cnt++;
                }
            }
        }
        cout << cnt << " ";
        for(int y =0; y<6; y++) {
            for(int x=0; x<32; x++) {
                if((a[y] & (1<<x)) || (b[y] & (1<<x))) {
                    cout << y*32+x << " ";
                }
            }
        }
        cout << "\n";

        // 차집합
        cnt = 0;
        for(int y =0; y<6; y++) {
            for(int x=0; x<32; x++) {
                if((a[y] & (1<<x)) && !(b[y] & (1<<x))) {
                    cnt++;
                }
            }
        }
        cout << cnt << " ";
        for(int y =0; y<6; y++) {
            for(int x=0; x<32; x++) {
                if((a[y] & (1<<x)) && !(b[y] & (1<<x))) {
                    cout << y*32+x << " ";
                }
            }
        }
        cout << "\n";
    }
}