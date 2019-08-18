#include <iostream>
#include <cstdio>
#define M 1000000
using namespace std;
int N,a;
int ar[22000000];
int main()
{
    scanf("%d",&N);
    for(int x=0; x<N; x++)
    {
        scanf("%d",&a);
        ar[a+M]++;
    }
    for(int x=0; x<=2000000; x++)
    {
        for(int y=0; y<ar[x]; y++)
        {
            printf("%d\n",x-M);
        }
    }
}