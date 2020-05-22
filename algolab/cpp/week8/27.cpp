#include <iostream>
#include <vector>
#include <string>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll tc;
string a;
vector<int> dash;
vector<int> number;

bool isNotValidDash() {
    if(dash.size() !=3) return true;
    if(dash[0] == 0) return true;
    if(dash[0]>5) return true;
    if(dash[1]-dash[0]>8 || dash[1]-dash[0] == 1) return true;
    if(dash[2]-dash[1]>7 || dash[2]-dash[1] == 1) return true;
    if(a.length() - dash[2] !=2) return true;
    return false;
}

bool isNotValidNumber() {
    if(number.size()!=10) return true;
    int sum = 0;
    for(int x=0; x<9; x++) {
        sum+=number[x]*(10-x);
    }
    int z= 1;
    while(z*11 < sum) {
        z++;
    }
    z = (z*11-sum+11)%11;
    if(z!=number[9]) return true;
    return false;

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> tc;
    while(tc--) {
        bool chk = true;
        cin >> a;
        dash.clear();
        number.clear();
        for(int i = 0; i <a.length(); i++) {
            if(i!= a.length()-1 &&!((('0'<=a[i] && a[i] <='9') || a[i] == '-'))) {
                chk = false;
                break;
            }
            if(i == a.length()-1 && !((('0'<=a[i] && a[i] <='9') || a[i] == '-' || a[i] == 'X'))) {
                chk = false;
                break;
            }
            if(a[i] == '-') dash.push_back(i);
        }

        if(!chk || isNotValidDash()) {
            cout << "0\n";
            continue;
        }

        for(int i = 0; i <a.length(); i++) {
            if(a[i] == '-') continue;
            if(a[i] == 'X') {
                number.push_back(10);
                continue;
            }
            number.push_back(a[i]-48);
        }
        if(isNotValidNumber()) {
            cout<<"0\n";
            continue;
        }

        cout<<"1\n";
    }
    
}