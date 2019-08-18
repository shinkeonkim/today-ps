#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

struct st{
    ll k;
    ll color;
    ll cnt;
};


bool compare(st A, st B){
    if (A.cnt<B.cnt)
    {
        return true;
    }
    else if (A.cnt == B.cnt)
    {
        if(A.color<B.color) return true;
    }
    return false;
}

ll N;
ll total=0,sub_total;
ll S[220000];
ll D[220000];
st ar[220000];

int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>N;
    for(int x=0; x<N; x++)
    {
        ar[x].k=x;
        cin>>ar[x].color >>ar[x].cnt;
    }

    sort(ar,ar+N,compare);
    sub_total+=ar[0].cnt;
    D[ar[0].k]=0;

    for(int x=1; x<N; x++)
    {
        if(ar[x].cnt!=ar[x-1].cnt)
        {
            total+=sub_total;
            sub_total=0;
        }
        D[ar[x].k] = total - S[ar[x].color];
        sub_total+=ar[x].cnt;
        S[ar[x].color] += ar[x].cnt;
    }
    
    for(int x=0; x<N; x++){
        cout<<D[x]<<"\n";
    }
    
}