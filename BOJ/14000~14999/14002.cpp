#include <iostream>
#include <stack>
using namespace std;
int N,M,M_array;
int ar[1100];
int D[1100], track[1100];
stack <int> S;
int main()
{
    cin>>N;
    for(int x=0; x<N; x++) cin>>ar[x];
    for(int x=0; x<N; x++)
    {
        track[x]=x;
        D[x] = 1;
    }

    for(int x=0; x<N; x++)
    {
        for(int y=x+1; y<N; y++)
        {
            if(ar[x] < ar[y] && D[y]<D[x]+1)
            {
                D[y] = D[x] + 1;
                track[y]=x;
            }
        }
    }
    M=D[0];
    for(int x=1; x<N; x++)
    {
        if(M<D[x])
        {
            M=D[x];
            M_array=x;
        }
    }

    while(M_array != track[M_array])
    {
        S.push(ar[M_array]);
        M_array=track[M_array];
    }
    S.push(ar[M_array]);
    cout<<M<<endl;
    while(!S.empty())
    {
        cout<<S.top()<<" ";
        S.pop();
    }
}