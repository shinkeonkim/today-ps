#include <iostream>
#include <queue>
using namespace std;
int N,M,S,F;
queue <int> Q;
int main()
{
    cin>>N>>M;
    Q.push(N);
    while(!Q.empty())
    {
        F = Q.front();
        Q.pop();

        S += F;
        if(F >= M)
        {
            Q.push(F/M);
        }
    }
    cout<<S;
}   