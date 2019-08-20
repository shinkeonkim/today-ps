#include <stdio.h>
#include <stdlib.h>
#define Mx 1<<20
int N,A;
long long S;
int p=0;
char buf[Mx];

char read_char()
{
    if(p == Mx)
    {
        fread(buf,1,Mx,stdin);
        p = 0;
    }
    return buf[p++];
}

int read_int(int &k)
{
    int current;
    k = read_char() - '0';
    while((current = read_char()) != '\n')
    {
        k = k*10 + current-'0';   
    }
}

int main()
{
    fread(buf,1,Mx,stdin);
    read_int(N);
    printf("%d\n",N);
    while(N--)
    {
        read_int(A);
        S+=A;
    }
    printf("%lld",S);
}