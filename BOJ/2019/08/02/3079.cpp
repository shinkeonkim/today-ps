#include <iostream>
#define ll long long
using namespace std;
ll m=1000000000000000000LL;
ll s=0,e=1000000000000000000LL,N,M,S,ar[110000];
int main()
{
    cin>>N>>M;
    for(int x=0; x<N; x++)
    {
        cin>>ar[x];
    }
    
    while(s<e)
    {
        ll mid = (s+e)/2;
        S = 0;
        for(int x=0; x<N; x++)
        {
            S += mid/ar[x];
        }

        if(S >= M)
        {
            e=mid-1;
            if(mid < m)
            {
                m=mid;
            }
        }
        else
        {
            s=mid+1;
        }
    }

    for(ll x=m+2; x>=m-2; x--)
    {
        S = 0;
        for(int y=0; y<N; y++)
        {
            S += x/ar[y];
        }
        if(S>=M)
        {
            m=x;
        }        
    }

    cout<<m;
}