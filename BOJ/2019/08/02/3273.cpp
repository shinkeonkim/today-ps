#include <iostream>
using namespace std;
int count[2200000],ar[110000];
int N,K,cnt;
int main()
{
    cin>>N;
    for(int x=0; x<N; x++)
    {
        cin>>ar[x];
        count[ar[x]]++;
    }
    cin>>K;

    for(int x=0; x<N; x++)
    {
        if(ar[x]<K)
        {
            cnt += count[K-ar[x]];
        }
    }

    cout << cnt/2;
}