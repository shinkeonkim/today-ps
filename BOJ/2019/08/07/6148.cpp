#include <iostream>
using namespace std;
long long N,A,M=1000001;
long long ar[22];
long long D[22];

void g()
{
    int S=0;
    for(int x=0; x<N; x++) S+=ar[x]*D[x];
    if(S>=A && S<M)
    {
        M=S;
    }
}


void f(int K)
{
    if(K==N-1)
    {
        for(int x=0; x<2; x++)
        {
            D[K]=x;
            g();
        }
    }
    else
    {
        for(int x=0; x<2; x++)
        {
            D[K]=x;
            f(K+1);
        }
    }
}


int main()
{
    cin>>N>>A;
    for(int x=0; x<N; x++)
    {
        cin>>ar[x];
    }
    f(0);
    cout<<abs(M-A);
}