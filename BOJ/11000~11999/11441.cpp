#include <cstdio>
using namespace std;
int N,K,a,b;
int ar[110000];
int D[110000];
int main()
{
    scanf("%d",&N);
    for(int x=1; x<=N; x++) scanf("%d",&ar[x]);
    D[1]=ar[1];
    for(int x=2; x<=N; x++) D[x]=D[x-1]+ar[x];

    scanf("%d",&K);
    for(int x=0; x<K; x++)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",D[b]-D[a-1]);
    }
}