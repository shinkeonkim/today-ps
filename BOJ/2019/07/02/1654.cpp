#include <iostream>
using namespace std;
int N,K;
long long ar[11000];
long long s=1,e=22000000000;
int main()
{
    cin>>N>>K;
    for(int x=0; x<N; x++) cin>>ar[x];
    while(s<e)
    {
        long long mid = (s+e)/2;
        long long cnt=0;
        for(int x=0; x<N; x++)
        {
            cnt += ar[x]/mid;
        }
        if(cnt < K)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        
    }
    long long Z = (s+e)/2;
    for(long long y=Z+1; y>=Z-1; y--)
    {  
        long long cnt=0;
        for(int x=0; x<N; x++)
        {
            cnt += ar[x]/y;
        }
        if(cnt >= K)
        {
            cout<<y;
            return 0;
        }
    }

}