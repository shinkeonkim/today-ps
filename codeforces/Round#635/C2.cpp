#include <iostream>
#include <vector>
#include <algorithm>
#define MX 440000000
using namespace std;
typedef long long ll;

struct st {
    ll idx, dist, child;
};


ll N,K,ans;
ll a,b;
vector <int> Edge[220000];

bool check[220000];
ll dist[220000];
ll child[220000];

st city[220000];
bool tourism[220000];
ll tour_count[220000];


ll dfs(ll n, ll dis) {
    dist[n] = dis;
    check[n] = true;
    ll count = 0;
    ll countb=0;
    for(int x=0; x<Edge[n].size(); x++) {
        int childnode = Edge[n][x];
        if(check[childnode]) continue;
        countb++;
        child[childnode] = dfs(childnode,dis+1);
        count += child[childnode];
    }
    return countb + count;
}

bool compare(st a, st b) {
    if(a.child > b.child) return true;
    return false;
}

void dfs2(int n, ll current) {
    if(!tourism[n]) {
        tour_count[n] = current;
    }
    check[n] = true;
    int z = 0;
    if(tourism[n]) z = 1;
    vector <st> childs;
    for(int x=0; x<Edge[n].size(); x++) {
        int childnode = Edge[n][x];
        if(check[childnode]) continue;
        childs.push_back({childnode,dist[childnode],child[childnode]});
    }
    sort(childs.begin(),childs.end(),compare);
    
    for(int x=0; x<Edge[n].size(); x++) {
        int childnode = Edge[n][x];
        if(check[childnode]) continue;
        dfs2(childnode,current+z);
    }
}


int main() {
    cin >> N >> K;
    for(int x=0; x<N-1; x++) {
        cin >> a >> b;
        Edge[a].push_back(b);
        Edge[b].push_back(a);
    }
    fill(dist, dist+N+1, MX);

    child[1] = dfs(1,0);
    for(int x = 1; x<=N; x++) {
        city[x] = {x,dist[x],child[x]};
    }

    fill(check,check+N+1,false);

    dfs2(1,0);

    for(int x=1; x<=N; x++) {
        ans += tour_count[x];
    }
    cout<<ans;
}