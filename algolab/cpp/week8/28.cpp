#include <iostream>
#include <vector>
#include <string>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

ll tc;
ll a,b,ar[11],ans;
string s;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> tc;
    while(tc--) {
        cin >> a;
        if(a == 1) {
            fill(ar,ar+4,0);
            cin >> s;
            ans = 0;
            int cnt = 0;
            for(int i = 0; i < s.length(); i++) {
                if(s[i] == '.') cnt++;
                else {
                    ar[cnt]*=10;
                    ar[cnt]+=s[i]-48;
                }
            }
            cnt = 1;
            for(int x=3; x>-1; x--) {
                ans+=ar[x]*cnt;
                cnt*=256;
            }
            cout << ans <<"\n";
        }
        else {
            cin >> b;
            cout << b / (256*256*256) << "." << (b% (256*256*256) / (256*256)) << "." << (b%(256*256)) / 256 <<"." << b%256<< "\n"; 
        }
    }   
    
}