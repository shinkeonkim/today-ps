#include <iostream>
#include <cstdio>
#define ll long long
using namespace std;
ll cnt, ar[88000];
int N, a;
int main()
{   
    for (int x = 1; x <= 80000; x++)
    {
        if (x % 3 == 0 || x % 7 == 0)
            cnt+=x;
        ar[x] = cnt;
    }
    scanf("%d",&N);
    for (int x = 0; x < N; x++)
    {
        scanf("%d",&a);
        printf("%d\n",ar[a]);
    }
}