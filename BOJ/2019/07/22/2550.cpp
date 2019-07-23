#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct st{
    int N,I,J; //N은 원래 숫자, I는 원래 index, j는 스위치의 위치
};

struct st2{
    int N,I;
};


int N;
st ar[11000];
st2 K[11000];
int D[11000];
int back[11000];
int Max,Pos;
vector <int> V;

bool compare1(st A,st B)
{
    if(A.N<B.N) return true;
    return false;
}

bool compare2(st A,st B)
{
    if(A.I<B.I) return true;
    return false;
}

bool compare3(st2 A,st2 B)
{
    if(A.N<B.N) return true;
    return false;
}

void backtrack(int K)
{
    if(back[K] == K)
    {
        V.push_back(ar[K].N);
    }
    else
    {
        V.push_back(ar[K].N);
        backtrack(back[K]);
    }
}


int main()
{
    scanf("%d",&N);
    for(int x=0; x<N; x++)
    {
        back[x]=x;
        D[x]=1;
        scanf("%d",&ar[x].N);
        ar[x].I=x;
    }
    for(int x=0; x<N; x++)
    {
        scanf("%d",&K[x].N);
        K[x].I=x;
    }
    sort(ar,ar+N,compare1);
    sort(K,K+N,compare3);
    for(int x=0; x<N; x++)
    {   
        ar[x].J=K[x].I;
    }
    sort(ar,ar+N,compare2);

    for(int x=0; x<N; x++)
    {
        for(int y=x+1; y<N; y++)
        {
            if(ar[x].J <ar[y].J && D[y] < D[x]+1)
            {
                D[y]=D[x]+1;
                back[y]=x;
            }
        }
    }
    for(int x=0; x<N; x++)
    {
        if(D[x]>Max) 
        {
            Max= D[x];
            Pos=x;
        }
    }
    printf("%d\n",Max);
    backtrack(Pos);
    sort(V.begin(),V.end());
    for(int x=0; x<V.size(); x++)
    {
        printf("%d ",V[x]);
    }
}