#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll tc;

void lis(){
	int n, i, x;
	iv1 v;
	iv1::iterator vv;
	v.pb(2000000000);
	
	cin >> n;
	for1(0, n){
		cin >> x;
		if(x > *v.rbegin()) {
			v.pb(x);
		}
		else{
			vv = lower_bound(v.begin(), v.end(), x);
			*vv = x;
		}
	}
	cout << sz(v) << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> tc;
    while(tc--) {
        lis();
    }
    
}