#include <iostream>
#include <string>
#define ll long long
using namespace std;
ll D[55];
ll ar[55];
ll N;
string a;
int main()
{
    cin>>a;
    for(int x=0; x<a.length(); x++) ar[x+1]=a[x]-'0';
    N=a.length();
    D[0]=1;
    if(ar[1]!=0) D[1]=1;
    for(int x=2; x<=N; x++)
    {
        if(ar[x]!=0) D[x] += D[x-1];
        if(ar[x-1]*10 + ar[x] <=34 && ar[x-1] != 0)
        {
            D[x] += D[x-2];
        }
    }
    cout<<D[N];
}