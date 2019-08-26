#include <iostream>
#include <string>
using namespace std;
int N,M;
int Min=87654321;
string ar[11];
int D[11][11];
void f(int Y,int X)
{
    for(int x=0; x<10; x++) D[Y][x]=1;
    for(int y=0; y<10; y++) D[y][X]=1;    
}
int main()
{
    cin>>N>>M;
    for(int y=0; y<10; y++)
    {
        cin>>ar[y];
    }

    for(int y=0; y<10; y++)
    {
        for(int x=0; x<10; x++)
        {
            if(ar[y][x] == 'o')
            {
                f(y,x);
            }
        }
    }

    for(int y=0; y<10; y++)
    {
        for(int x=0; x<10; x++)
        {
            if(D[y][x]==0 && Min > abs(y-N+1)+abs(x-M+1)) Min=abs(y-N+1)+abs(x-M+1);
        }
    }
    cout<<Min;
}