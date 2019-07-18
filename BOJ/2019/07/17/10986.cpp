#include <iostream>
#define ll long long
using namespace std;
int N,Mod;
ll answer;
int ar[1100000];
int D[1100000];
ll count[1100];
int main()
{
    cin>>N>>Mod;
    for(int x=0; x<N; x++) cin>>ar[x];
    D[0]=ar[0]%Mod;
    for(int x=1; x<N; x++) D[x]=(D[x-1]+ar[x])%Mod;
    for(int x=0; x<N; x++)
    {
        count[D[x]]++;
    }
    answer += count[0];
    for(int x=0; x<Mod; x++)
    {
        answer += count[x]*(count[x]-1)/2;
    }
    cout<<answer;
}