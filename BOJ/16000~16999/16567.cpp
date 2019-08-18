#include <iostream>
using namespace std;
int N,M,S,k1,k2;
int ar[1100000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>N>>M;
    for(int x=0; x<N; x++) cin>>ar[x];

    if(ar[0])
    {
        S=1;
    }
    for(int x=1; x<N; x++)
    {
        if(ar[x-1]!=1 && ar[x] ==1) S++;
    }

    for(int x=0; x<M; x++)
    {
        cin>>k1;
        if(k1 == 0)
        {
            cout<<S<<"\n";
        }
        else
        {
            cin>>k2;
            k2--;
            if(ar[k2]==1) continue;
            int cnt =0;
            if(k2>0 && ar[k2-1] ==1) cnt++;
            if(k2+1<N && ar[k2+1] ==1) cnt++;
            if(cnt == 2)
            {
                S--;
            }
            else if(cnt == 0)
            {
                S++;
            }
            ar[k2]=1;
        }
    }

}