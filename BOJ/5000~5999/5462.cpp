// 문제 번호: 5462 문제 이름: POI
// 문제 최초 시도: 2019_05_02
// 문제 풀이 완료: 2019_05_02
// 이 코드의 접근법: 구조체 정렬

#include <iostream>
#include <algorithm>
using namespace std;

struct st{
    int K,Score,Cnt;
};

st ar[2200];
int N,T,P;
int D[2200][2200],S[2200];

bool compare(st a, st b)
{
    if(a.Score>b.Score) return true;
    else if(a.Score==b.Score) 
    {
        if(a.Cnt>b.Cnt) return true;
        else if(a.Cnt==b.Cnt)
        {
            if(a.K<b.K) return true;
        }
    }
    return false;
}

int main()
{
    cin>>N>>T>>P;
    for(int x=1; x<=T; x++) S[x]=N;
    for(int y=1; y<=N; y++)
    {
        ar[y].K=y;
        for(int x=1; x<=T; x++)
        {
            cin>>D[y][x];
            ar[y].Cnt+=D[y][x];
            S[x]-=D[y][x];
        }
    }
    for(int y=1; y<=N; y++)
    {
        for(int x=1; x<=T; x++)
        {
            ar[y].Score+= D[y][x]==1? S[x]:0;
        }
    }
    sort(ar+1,ar+N+1,compare);

    for(int y=1; y<=N; y++)
    {
        if(ar[y].K==P)
        {
            cout<<ar[y].Score<<" "<<y;
            break;
        }
    }
}