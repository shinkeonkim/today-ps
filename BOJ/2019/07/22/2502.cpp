#include <iostream>
using namespace std;
int N,M;
int D1[33]={0,1,0,1};
int D2[33]={0,0,1,1};
int main()
{
    cin>>N>>M;
    for(int x=4; x<=N; x++)
    {
        D1[x]=D1[x-1]+D1[x-2];
        D2[x]=D2[x-1]+D2[x-2];
    }
    for(int x=0; x<=M/D1[N]; x++)
    {
        if(D1[N]*x <=M)
        {
            if((M-D1[N]*x) % D2[N] == 0 && x <= (M-D1[N]*x) / D2[N])
            {
                cout<<x<<endl<<(M-D1[N]*x) / D2[N];
                return 0;
            }
        }
    }
}