#include <iostream>
using namespace std;
int N,M,S;
int ar[110][110];
int dy[]={0,0,1,-1};
int dx[]={1,-1,0,0};
int main()
{
    cin>>N>>M;
    for(int y=1; y<=N; y++)
    {
        for(int x=1; x<=M; x++)
        {
            cin>>ar[y][x];
        }
    }
    S += 2*N*M;
    for(int y=1;y<=N; y++)
    {
        for(int x=1; x<=M; x++)
        {
            for(int d=0;d<4;d++)
            {
                S+=max(0,ar[y][x]-ar[y+dy[d]][x+dx[d]]);
            }
        }
    }
    cout<<S;
}