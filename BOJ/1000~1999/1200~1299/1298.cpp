#include <iostream>
#include <vector>
#define Mx 5500
using namespace std;
int N,M,a,b,ans;
int d[Mx];
bool c[Mx];
vector <int> V[Mx];

bool dfs(int s_node)
{
    for(int x=0; x<V[s_node].size(); x++)
    {
        int e_node = V[s_node][x];
        if(c[e_node]) continue;
        c[e_node] = true;
        if(d[e_node] == 0 || dfs(d[e_node]))
        {
            d[e_node] = s_node;
            return true;
        }
    }
    return false;
}

int main()
{
    cin>>N>>M;
    for(int x=0; x<M; x++)
    {
        cin>>a>>b;
        V[a].push_back(b);
    }

    for(int x=1; x<=N; x++)
    {
        fill(c,c+Mx,false);
        if(dfs(x)) ans++;
    }
    cout<<ans;
}