#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N,S,a,b;
vector <vector<int>> V(110000);
int main()
{
    cin>>N;
    for(int x=0; x<N; x++)
    {
        cin>>a>>b;
        V[b].push_back(a);
    }

    for(int x=1; x<=N; x++)
    {
        if(!V[x].empty())sort(V[x].begin(),V[x].end());
    }

    for(int x=1; x<=N; x++)
    {
        if(!V[x].empty())
        {
            S+=V[x][1]-V[x][0];
            S+=V[x][V[x].size()-1]-V[x][V[x].size()-2];
            for(int y=1; y<V[x].size()-1; y++)
            {
                S+=min(V[x][y]-V[x][y-1],V[x][y+1]-V[x][y]);
            }
        }
    }

    cout<<S;
}