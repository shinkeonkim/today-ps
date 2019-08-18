#include <iostream>
using namespace std;
int T,N,ar[1100],A,M,K;
int main()
{
    cin>>T;
    for(int t=0; t<T; t++)
    {
        M=-1;
        K=-1;
        for(int x=1; x<=1000; x++) ar[x]=0;
        cin>>N;
        for(int x=0; x<N; x++)
        {
            cin>>A;
            ar[A]+=1;
        }
        for(int x=1; x<=1000; x++)
        {
            if(ar[x]>M)
            {
                M=ar[x];
                K=x;
            }
        }
        cout<<K<<endl;
    }
}