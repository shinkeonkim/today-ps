#include <iostream>
#define Mx 987654321
#define ll long long
using namespace std;
ll V,M,a,b,c,Jh,Sh,D[110][110];
ll Min_Sum = Mx;
ll Pos =-1;
ll Min_Jh = Mx;

int main()
{
    cin>>V>>M;
    for(int x=1; x<=V; x++)
    {
        for(int y=1; y<=V; y++)
        {
            D[x][y]=Mx;
        }
    }
    for(int x=0; x<M; x++)
    {
        cin>>a>>b>>c;
        D[a][b]=min(D[a][b],c);
        D[b][a]=min(D[b][a],c);
    }
    cin>>Jh>>Sh;
    
    for(int z=1; z<=V; z++)
    {
        for(int x=1; x<=V; x++)
        {
            for(int y=1; y<=V; y++)
            {
                if(D[x][y] > D[x][z] + D[z][y])
                {
                    D[x][y] = D[x][z] + D[z][y];
                }
            }
        }
    }

    for(int x=1; x<=V; x++)
    {
        if(x == Jh || x== Sh) continue;
        if(D[Jh][x] + D[Sh][x] < Min_Sum && D[Jh][x] <= D[Sh][x]) 
        {
            Min_Sum = D[Jh][x] + D[Sh][x];
        }
    }


    for(int x=1; x<=V; x++)
    {
        if(D[Jh][x] + D[Sh][x] == Min_Sum && D[Jh][x] <= D[Sh][x] && D[Jh][x] < Min_Jh)
        {
            Min_Jh = D[Jh][x];
            Pos = x;
        }
    }
    cout<<Pos;
}