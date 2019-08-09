#include <iostream>
#define ll long long
using namespace std;
ll a,ans;
int main()
{
    cin>>a;
    while(a>0)
    {
        ll s=1;
        ll e=100000;
        ll max_n=0;
        while(s<=e)
        {
            ll mid =(s+e)/2;
            if(mid*(mid+1)/2<=a)
            {
                if(mid>max_n)
                {
                    max_n=mid;
                }
                s=mid+1;
            }    
            else
            {
                e=mid-1;
            }
        }
        ans += max_n;
        a -= max_n*(max_n+1)/2;

    }
    cout<<ans;
}