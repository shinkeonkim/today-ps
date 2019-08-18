#include <iostream>
#include <queue>
using namespace std;
int S=0;
int N;
queue <int> Q;
int main()
{
    cin>>N;
    Q.push(N);
    while(!Q.empty())
    {
        int F = Q.front();
        Q.pop();
        if(F>1)
        {
            if(F%2==0)
            {
                S+=(F/2)*(F/2);
                Q.push(F/2);
                Q.push(F/2);
            }
            else
            {
                S+=(F/2)*(F/2+1);
                Q.push(F/2);
                Q.push(F/2+1);
            }
        }
    }
    cout<<S;
}