#include <iostream>
using namespace std;
int T,N,M,S;
int ar[110][110];
int cnt;
int main()
{
    cin>>T;
    for(int t=0; t<T; t++)
    {
        cin>>N>>M;

        for(int y=0; y<N; y++)
        {
            for(int x=0; x<M; x++)
            {
                cin>>ar[y][x];
            }
        }

        S=0;
        for(int x=0; x<M; x++)
        {
            cnt=0;
            for(int y=N-1; y>-1; y--)
            {
                if(ar[y][x]==1)
                {
                    S+=(N-1)-y-cnt;
                    cnt++;
                }
            }
        }
        cout<<S<<endl;

    }
}