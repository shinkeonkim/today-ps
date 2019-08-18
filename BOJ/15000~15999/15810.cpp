#include <iostream>
#define ll long long
using namespace std;
int N,M;
ll s=0,e=99999999999,mid,Min=99999999999,total;
int ar[1100000];
int main()
{
    cin>>N>>M;
    for(int x=0; x<N; x++)
    {
        cin>>ar[x];
    }
    while(s<=e)
    {
        mid = (s+e)/2;
        total=0;
        for(int x=0; x<N; x++)
        {
            total+=mid/ar[x];
        }
        if(total>=M)
        {
            if(mid < Min) Min=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    cout<<Min;

}