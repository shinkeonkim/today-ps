#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool c[4000000];
int A,B,D,ans;
string s,d;
vector <int> V;
int main() {
    cin >> A >> B >> D;
    d = to_string(D);
    for(int x=2; x<=B; x++) c[x] = true;
    for(int x=2; x<=B; x++) {
        if(c[x]) {
            V.push_back(x);
            for(int y=x+x; y<=B; y+=x) {
                c[y]=false;
            }
        }
    }

    for(int i : V) {
        if(i<A || i>B) continue;
        s = to_string(i);
        if(s.find(d) != string::npos) {
            // cout <<s << " "<<d<<endl;
            ans++;
        }
    }
    cout<<ans;


}