#include <iostream>
#define Mx (ll)123456789
using namespace std;
typedef long long ll;
ll N,M;
ll D[220][220];
ll ar[1100];
int main()
{
    cin>>N>>M;
    for(int y=0; y<N; y++)
    {
        for(int x=0; x<N; x++)
        {
            cin>>D[y][x];
            if(y==x) D[y][x] = 1;
            if(D[y][x] == 0)
            {
                D[y][x] = Mx;
            }
        }
    }
    for(int x=0; x<M; x++) cin>>ar[x];

    for(int z=0; z<N; z++)
    {
        for(int x=0; x<N; x++)
        {
            for(int y=0; y<N; y++)
            {
                if(D[x][y] > D[x][z] + D[z][y])
                {
                    D[x][y] = D[x][z] + D[z][y];
                }
            }
        }
    }

    for(int x=0; x<M-1; x++)
    {
        if(D[ar[x]-1][ar[x+1]-1] >= Mx)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}