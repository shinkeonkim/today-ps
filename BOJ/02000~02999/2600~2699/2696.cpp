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

ll N, K, a;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    while(N--) {
        ll cnt = 0;
        priority_queue <ll, vector<ll>, less<ll>> Q1; 
        priority_queue <ll, vector<ll>, greater<ll>> Q2;
        cin >> K;
        cout << K/2 + 1 << "\n";
        for1(0, K) {
            cin >> a;
            if(Q1.size() == 0 || Q1.top() >= a) {
                Q1.push(a);
            }
            else {
                Q2.push(a);
            }

            while(Q1.size() > Q2.size()+1) {
                Q2.push(Q1.top());
                Q1.pop();
            }

            while(Q2.size() +1 > Q1.size()) {
                Q1.push(Q2.top());
                Q2.pop();
            }

            if(i%2 ==0) {
                cout << Q1.top();
                cnt++;
                if(cnt == 10) {
                    cout << "\n";
                    cnt = 0;
                }
                else {
                    cout << " ";
                }
            }
        }
        cout << "\n";
    }

}