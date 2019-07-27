#include <iostream>
using namespace std;
int N,Q,a,b,ans;
int ar[1100000];
int D[1100000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>N>>Q;
    for(int x=1; x<=N; x++) cin>>ar[x];
    D[1]=ar[1];
    for(int x=2; x<=N; x++)
    {
        D[x] = D[x-1] ^ ar[x];
    }
    for(int x=0; x<Q; x++)
    {
        cin>>a>>b;
        if(a != 1)
        {
            ans ^= (D[b] ^ D[a-1]);
        }
        else
        {
            ans ^= D[b];
        }
    }
    cout<<ans;
}