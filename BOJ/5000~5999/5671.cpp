#include <iostream>
using namespace std;
int a,b,k,ar[11],D[5500];
int main()
{
    for(int x=1; x<=5000; x++)
    {
        k=1;
        for(int y=0; y<10; y++) ar[y]=0;

        int z=x;
        while(z>0)
        {
            ar[z%10]++;
            z/=10;
        }

        for(int y=0; y<10; y++)
        {
            if(ar[y]>1) k=0;
        }        
        D[x]=D[x-1]+k;
    }

    while(cin>>a>>b)
    {
        cout<<D[b]-D[a-1]<<endl;       
    }
}