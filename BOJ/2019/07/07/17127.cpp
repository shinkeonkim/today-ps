#include <iostream>
#include <algorithm>
using namespace std;
int N,M,S;
int ar[11];
void f(int a,int b)
{
    int k=1;
    for(int x=a; x<b; x++)
    {
        k*=ar[x];
    }
    S+=k;
}

int main()
{
    cin>>N;
    for(int x=0; x<N; x++) cin>>ar[x];

    for(int k1=1; k1<N; k1++)
    {
        for(int k2=k1+1; k2<N; k2++)
        {
            for(int k3=k2+1; k3<N; k3++)
            {
                //cout<<0<<" "<<k1<<" "<<k2<<" "<<k3<<" "<<N<<endl;
                S=0;
                f(0,k1);
                f(k1,k2);
                f(k2,k3);
                f(k3,N);
                M=max(M,S);
            }
        }
    }
    cout<<M;
}