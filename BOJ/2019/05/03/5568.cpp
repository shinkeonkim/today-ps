#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int N,K,D[11];
string ar[11];
vector <string> V;

void g()
{
    string A="";
    for(int t=0; t<K; t++)
    {  
        for(int k=0; k<ar[D[t]].size(); k++)
        {
            A.push_back(ar[D[t]][k]);
        }
    }
    V.push_back(A);
}

void f(int T)
{
    if(T==K)
    {
        g();
    }
    else
    {
        for(int x=1; x<=N; x++)
        {
            bool check = true;
            for(int y=0; y<T; y++)
                if(D[y]==x)
                {
                    check=false;
                }

            if(check)
            {
                D[T] = x;
                f(T+1);
                D[T] = 0;
            }
        }   
    }
}
int main()
{
    cin>>N>>K;
    
    for(int x=1; x<=N; x++)
    {
        cin>>ar[x];
    }

    for(int x=1; x<=N; x++)
    {
        D[0]=x;
        f(1);
    }
    sort(V.begin(),V.end());
    int Cnt=1;
    for(int x=1; x<V.size(); x++)
    {
        if(V[x-1]!=V[x]) Cnt++;
    }
    cout<<Cnt;
}