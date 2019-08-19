#include <iostream>
using namespace std;
int ar[110][110];
int N,M;
int X=1,Y=1;
int dx[]={1,0,-1,0},dy[]={0,1,0,-1},d;
int main()
{
    cin>>N>>M;
    for(int x=0; x<=M+1; x++)
    {
        ar[0][x]=1;
        ar[N+1][x]=1;
    }
    for(int y=0; y<=N+1; y++)
    {
        ar[y][0]=1;
        ar[y][M+1]=1;
    }
    for(int x=0; x< N*M; x++)
    {
        ar[Y][X]=1;
        if(ar[Y+dy[d%4]][X+dx[d%4]] == 1)
        {
            d++;
        }
        Y=Y+dy[d%4];
        X=X+dx[d%4];
    }
    cout<<d-1;

    
}