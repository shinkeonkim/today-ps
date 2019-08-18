#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
ll N,M,K,Z,a,b,c;
ll ar[1100000];
ll S[1100];
int main()
{
    cin>>N>>M>>K;
    Z=(ll)sqrt(N);
    for(int x=1; x<=N; x++)
    {
        cin>>ar[x];
        S[x/Z]+=ar[x];
    }
    for(int x=0; x<M+K; x++)
    {
        cin>>a>>b>>c;
        if(a==1)
        {
            S[b/Z] += c - ar[b];
            ar[b]+= c-ar[b];
        }
        else
        {
            ll ans = 0;
            while(b%Z !=0 && b<=c) ans += ar[b++];
            while(c%Z != Z-1 && c>=b) ans += ar[c--];
            while(b<=c)
            {
                ans += S[b/Z];
                b+=Z;
            }
            cout<<ans<<endl;
        }
    }

}