#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
ll N,cnt,ans;
string s;
vector <ll> V1;
vector <ll> V2;
int main() {
    cin >> N >> s;
    for(int x=0; x<N; x++) {
        if(s[x] == 'R') V1.push_back(x);
        if(s[x] == 'G') V2.push_back(x);
        if(s[x] == 'B') cnt++;
    }
    for(auto i : V1) {
        for(auto j : V2) {
            ll mi = 0;
            ll diff = (j-i) > 0 ? (j-i) : (i-j);
            if(i < j) {
                if(j+diff < N && s[j+diff] == 'B') mi++;
                if(i-diff >=0 && s[i-diff] == 'B') mi++;
                if(diff % 2 == 0) {
                    if(s[i + diff/2] == 'B') mi++;
                }
            }
            else {
                if(i+diff < N && s[i+diff] == 'B') mi++;
                if(j-diff >=0 && s[j-diff] == 'B') mi++;
                if(diff % 2 == 0) {
                    if(s[j + diff/2] == 'B') mi++;
                }
            }
            ans += cnt - mi;
        }
    }
    cout<<ans;
}