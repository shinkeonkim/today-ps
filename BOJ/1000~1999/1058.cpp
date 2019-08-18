#include <iostream>
#include <string>
#define Mx 1000
using namespace std;
int N,M;
int cnt[55];
string ar[55];
int D[55][55];
int main()
{
    cin>>N;
    for(int y=0; y<N; y++) cin>>ar[y];
    for(int y=0; y<N; y++)
        for(int x=0; x<N; x++)
        {
            if(ar[y][x] == 'N') D[y][x] = Mx;
            else D[y][x] = 1;
        }
    for(int z=0; z<N; z++)
        for(int x=0; x<N; x++)
            for(int y=0; y<N; y++)
            {
                if(D[x][y] > D[x][z]+D[z][y])
                {
                    D[x][y] = D[x][z] + D[z][y];
                }
            }
    
    for(int y=0; y<N; y++)
    {
        for(int x=0; x<N; x++)
        {
            if(y!=x && D[y][x] <=2) cnt[y]++;
        }
    }

    for(int y=0; y<N; y++)
    {
        if(M<cnt[y]) M=cnt[y];
    }
    cout<<M;
}