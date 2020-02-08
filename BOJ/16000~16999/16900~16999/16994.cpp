#include <iostream>
#include <string>
#include <ext/rope>

using namespace std;
using namespace __gnu_cxx;

crope r;
string s;
int l;
int T,q,a,b;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;
    r.append(s.c_str());
    l = s.length();
    cin >> T;
    while(T--) {
        cin>>q;
        if(q==1) {
            cin >> a >> b;
            r = r.substr(a,b-a+1)+r.substr(0,a)+r.substr(b+1,l-b);
            // cout<<r<<"\n";
        }
        if(q==2) {
            cin >> a >> b;
            r = r.substr(0,a)+r.substr(b+1,l-b)+r.substr(a,b-a+1);
            // cout<<r<<"\n";
        }
        if(q==3) {
            cin >> a;
            cout<<r.at(a)<<"\n";
        }
    }


}