#include <iostream>
#define Mod 1000000009
using namespace std;
int N;
long long D[44000][11];
int main()
{
    cin>>N;
    D[1][0]=0;
    D[1][1]=1;
    D[1][2]=1;
    for(int i=2; i<=N; i++)
    {
        D[i][0] = (D[i-1][0] +D[i-1][1] +D[i-1][2])%Mod;
        D[i][1] = (D[i-1][0] +D[i-1][1] +D[i-1][2])%Mod;
        D[i][2] = (D[i-1][0] +D[i-1][1] +D[i-1][2])%Mod;
    }
    cout<<D[N][0];
}