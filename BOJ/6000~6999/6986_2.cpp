#include <iostream>
#include <algorithm>
using namespace std;

double a;
int ar[110000];
int N,K;
int S1,S2;
int main()
{
    cin>>N>>K;
    for(int x=0; x<N; x++)
    {
        cin>>a;
        a*=10;
        ar[x] = (int)a;
    }
    sort(ar,ar+N);

    for(int x = K; x<N-K; x++)
    {
        S1+=ar[x];
    }
    S2=S1;
    S2+=K*(ar[K]+ar[N-K-1]);
    printf("%.2lf\n%.2lf",(double)S1/(N-2*K)/10+ 0.00000001,(double)S2/N/10+ 0.00000001);
}