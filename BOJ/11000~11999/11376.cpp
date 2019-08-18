#include <iostream>
#include <vector>
#define Mx 2200
using namespace std;
int N,M,S,a;
vector <int> ar[Mx];
int d[Mx];
bool c[Mx];

bool dfs(int s_node)
{
    for(int x=0; x<ar[s_node].size(); x++)
    {
        int e_node = ar[s_node][x];
        if(c[e_node]) continue;
        c[e_node]=true;
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
    for(int x=1; x<=N; x++)
    {
        cin>>S;
        for(int y=0;y<S; y++)
        {
            cin>>a;
            ar[2*x-1].push_back(a);
            ar[2*x].push_back(a);
        }
    }

    int cnt = 0;
    for(int s_node=1; s_node<=N*2; s_node++)
    {
        fill(c,c+Mx,false);
        if(dfs(s_node)) cnt++;
    }
    cout<<cnt;
}