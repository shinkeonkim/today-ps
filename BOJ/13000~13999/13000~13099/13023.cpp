#include <iostream>
#include <vector>
using namespace std;
int N,M,a,b;
vector <int> V[2200];
bool check[2200];

bool dfs(int current,int k) {
    if(k==5) {
        return true;
    }
    else {
        for(int x = 0; x<V[current].size(); x++) {
            if(!check[V[current][x]]) {
                check[V[current][x]] = true;
                bool ret = dfs(V[current][x],k+1);
                check[V[current][x]] = false;
                if(ret) return true;
            }
        }
        return false;
    }
}


int main() {
    cin >> N >> M;
    for(int x = 0; x< M; x++) {
        cin >> a >> b;
        V[a].push_back(b);
        V[b].push_back(a);
    }

    for(int x = 0; x<N; x++) {
        check[x] = true;
        if(dfs(x,1)) {
            cout<<1;
            return 0;
        }
        check[x] = false;
    }
    cout<<0;

}