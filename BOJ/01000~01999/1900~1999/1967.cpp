#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

struct st {
    ll child, weight;
};

ll N,ans;
ll num, ch, w;
vector <vector<st>> edge(110000);
bool check[110000];

ll get_height(int node) {
    check[node] = true;

    vector <ll> ret;
    ll mx = 0;
    ll mx2 = 0;
    int count = 0;
    for(auto i : edge[node]) {
        if(!check[i.child]) count++; 
    }
    if(count == 0 ){
        return 0;
    } 
    else {
        for(auto i : edge[node]) {
            if(!check[i.child]){
                ret.push_back(get_height(i.child) + i.weight);
                if(ret.back() > mx) {
                    mx2 = mx;
                    mx = ret.back();
                }
                else if(ret.back() > mx2) {
                    mx2 = ret.back();
                }
            }
        }
        
    }
    if(ans < mx + mx2) {
        ans = mx + mx2;
    }
    return mx;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    for(int i = 0; i < N-1; i++) {
        cin >> num;
        cin >> ch;
        cin >> w;
        edge[num].push_back({ch, w});
    }

    get_height(1);

    cout << ans;
    
}