#include <iostream>
using namespace std;
int N,M,a,b,c;
int D[1100000];

int find(int k)
{
    if(D[D[k]] == D[k])
    {
        return D[k];
    }
    else
    {
        return D[k]=find(D[k]);
    }
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>N>>M;
    for(int x=1; x<=N; x++) D[x]=x;
    for(int x=0; x<M; x++)
    {
        cin>>a>>b>>c;

        if(a == 0)
        {
            int A=find(b);
            int B=find(c);
            if(A<B)
            {
                D[B]=A;
            }
            else D[A]=B;
        }
        else
        {
            if(find(b) != find(c))
            {
                cout<<"NO\n";
            }
            else cout<<"YES\n";
        }
        
    }
}