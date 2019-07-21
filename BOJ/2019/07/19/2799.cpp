#include <iostream>
#include <string>
using namespace std;
int N,M,cnt;
string ar[550]; 
int D[10];
int main()
{
    cin>>N>>M;
    for(int x=0; x<5*N+1; x++)
    {
        cin>>ar[x];
    }   

    for(int y=0; y<N; y++)
    {
        for(int x=0; x<M; x++)
        {
            cnt=0;
            for(int k=0; k<4; k++)
            {
                if(ar[1+y*5+k][1+x*5]=='*') cnt++;  
            }
            D[cnt]++;
        }
    }
    
    for(int x=0; x<5; x++) cout<<D[x]<<" ";
}