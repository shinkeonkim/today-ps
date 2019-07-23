#include <iostream>
using namespace std;

//int n=10000000;
int N;
int cnt=0;
int ans = 0;
int L[]={1,11,192,2893,38894,488895,5888896,68888897,788888898};
int S[]={1,10,100,1000,10000,100000,1000000,10000000,100000000};
int main()
{
    cin>>N;
    int K = N;
    while(K>0)
    {
        K/=10;
        cnt++;
    }
    ans += L[cnt-1];
    for(int x = S[cnt-1]+1; x<=N; x++)
    {
        int Z= x;
        while(Z>0)
        {
            Z/=10;
            ans++;
        }
    }
    cout<<ans;

}