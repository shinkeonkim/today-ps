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

ll N, a;
priority_queue <ll, vector<ll>, less<ll> > left_tree; // max is top
priority_queue <ll, vector<ll>, greater<ll> > right_tree; // min is top

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;

    for1(0,N) {
        cin >> a;
        right_tree.push(a);

        if(left_tree.size() > 0 && right_tree.size() > 0 && left_tree.top() > right_tree.top()) {
            left_tree.push(right_tree.top());
            right_tree.pop();
        }
        while(right_tree.size() > left_tree.size()) {
            left_tree.push(right_tree.top());
            right_tree.pop();
        }

        while(left_tree.size() > 1 && left_tree.size()-1 > right_tree.size()) {
            right_tree.push(left_tree.top());
            left_tree.pop();
        }
        cout << left_tree.top() << "\n";
    }

}