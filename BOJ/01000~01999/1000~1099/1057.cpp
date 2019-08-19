#include <iostream>
using namespace std;
int N,A,B,cnt=1;
int main()
{
    cin>>N>>A>>B;
    if(A%2==1) A++;
    if(B%2==1) B++;
    if(A==B)
    {
        cout<<1;
        return 0;
    }
    while(N>0)
    {
        N/=2;
        if(A%2==1) A++;
        if(B%2==1) B++;

        if(A==B) break;
        else
        {
            A/=2;
            B/=2;
        }
        cnt++;
    }
    if(cnt==1)cout<<-1;
    else cout<<cnt;
}