#include <iostream>
#include <vector>
#include <cstdio>
#define Mx 1100
using namespace std;
int T,N,M,a,b;
int d[Mx];
bool c[Mx];
vector <vector<int>> ar(Mx);
bool dfs(int s_node)
{
    for(int x=0; x<ar[s_node].size(); x++)
    {
        int e_node = ar[s_node][x];
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
    scanf("%d",&T);
    for(int t=0; t<T; t++)
    {
        fill(d,d+Mx,0);
        for(int x=0; x<Mx; x++) ar[x].clear();
        scanf("%d %d",&N,&M);
        for(int x=1; x<=M; x++)
        {
            scanf("%d %d",&a,&b);
            for(int y=a; y<=b; y++) ar[x].push_back(y);
        }
        int cnt = 0; 
        for(int x=1; x<=M; x++)
        {
            fill(c,c+Mx,false);
            if(dfs(x)) cnt++;
        }
        printf("%d\n",cnt);
    }
}
