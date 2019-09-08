#include <iostream>
#define Mx 10000000
using namespace std;
int N,M,S;
int D[550][550];
int a,b;
int main()
{
    cin>>N>>M;
    for(int x=1; x<=N; x++)
        for(int y=1; y<=N; y++)
            D[x][y]=Mx;
    for(int x=0; x<M; x++)
    {
        cin>>a>>b;
        D[a][b]=1;
    }
    for(int z=1; z<=N; z++)
        for(int x=1; x<=N; x++)
            for(int y=1; y<=N; y++)    
            {
                if(D[x][y] > D[x][z]+D[z][y])
                    D[x][y] = D[x][z]+D[z][y];
            }
    
    for(int x=1; x<=N; x++)
    {
        int cnt =0;
        for(int y=1; y<=N; y++)
        {
            if(D[x][y] !=Mx || D[y][x] !=Mx) cnt++;
        }
        if(cnt == N-1) S++;
    }
    cout<<S;
}