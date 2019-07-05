#include <iostream>
#include <cmath>
using namespace std;
long long N,K;
int main()
{
    cin>>N;
    K=(long long)sqrt(N);
    if(K*K == N)
    {
        cout<<K;
    }
    else
    {
        cout<<K+1;
    }
    
}