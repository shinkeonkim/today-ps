#include <iostream>
using namespace std;
int D[220][220];
int N,M,a,b,cnt;
int main()
{
    cin>>N>>M;
    for(int x=0; x<M; x++)
    {
        cin>>a>>b;
        D[a][b]=1;
        D[b][a]=1;
    }

    for(int x=1; x<=N; x++)
    {
        for(int y=x+1; y<=N; y++)
        {
            for(int z=y+1; z<=N; z++)
            {
                if(D[x][y] || D[x][z] || D[y][z]) continue;
                cnt++;
            }
        }
    }
    cout<<cnt;
}