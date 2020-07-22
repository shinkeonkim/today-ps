#include <iostream>
using namespace std;
int N,M,a,b;
int ar[110000];
int D[110000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>N>>M;
    for(int x=1; x<=N; x++) cin >> ar[x];
    D[1]=ar[1];
    for(int x=2; x<=N; x++) D[x]=D[x-1]+ar[x];
    for(int x=0; x<M; x++)
    {
        cin>>a>>b;
        cout<<D[b]-D[a-1]<<"\n";
    }
}