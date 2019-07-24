#include <iostream>
#include <stack>
using namespace std;
int N,K=1;
int ar[1100];
stack <int> stk;
int main()
{
    cin>>N;
    for(int x=0; x<N; x++) cin>>ar[x];
    for(int x=0; x<N; x++)
    {
        if(ar[x] == K) K++;
        else
        {
            while(!stk.empty() && K == stk.top())
            {
                stk.pop();
                K++;
            }
            stk.push(ar[x]);
        }
    }
    while(!stk.empty() && K ==stk.top())
    {
        stk.pop();
        K++;
    }

    if(stk.empty())
    {
        cout<<"Nice";
    }
    else
    {
        cout<<"Sad";
    }
}