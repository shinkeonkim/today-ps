#include <iostream>
#include <algorithm>
using namespace std;
long long N,M,diff,Mn=2100000000,s,e=1;
long long ar[110000];
int main()
{
    cin>>N>>M;
    for(int x=0; x<N; x++) cin>>ar[x];
    sort(ar,ar+N);
    diff = ar[e]-ar[s];
    while(s<=e && e<=N && s<=N)
    {
        if(M <= diff)
        {
            if(diff < Mn) Mn = diff;
            diff -= ar[s+1]-ar[s]; 
            s++;
        }
        else
        {
            diff+= ar[e+1]-ar[e];
            e++;
        }
    }
    cout<<Mn;
}