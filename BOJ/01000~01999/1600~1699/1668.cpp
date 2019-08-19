#include <iostream>
using namespace std;
int N;
int ar[55];
int ans1,ans2;
int M1,M2;
int main()
{
    cin >> N;
    for (int x = 0; x < N; x++)
    {
        cin >> ar[x];
    }

    M1=ar[0];
    ans1=1;
    for(int x=1; x<N; x++)
    {
        if(ar[x]>M1)
        {
            ans1++;
            M1=ar[x];
        }
    }
    

    M2=ar[N-1];
    ans2=1;
    for(int x=N-1; x>-1; x--)
    {
        if(ar[x]>M2)
        {
            ans2++;
            M2=ar[x];
        }
    }
    cout<<ans1<<endl<<ans2;
}