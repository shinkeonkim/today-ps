// 문제 번호: 3182 문제 이름: 한동이는 공부가 하기 싫어!
// 문제 최초 시도: 2019_05_09
// 문제 풀이 완료: 2019_05_09
// 이 코드의 접근법: DFS , 최대 사이클 크기 구하기

#include <iostream>
using namespace std;
int N,Cnt,Max=-1,Pos=-1;
int ar[1100];
int check[1100];

void f(int k)
{
    Cnt++;
    if(check[k]==1)
    {
        return ;
    }
    else
    {
        check[k]=1;
        if(k!=ar[k]) f(ar[k]);
        check[k]=0;
    }
    
}
int main()
{
    cin>>N;
    for(int x=1; x<=N; x++)
    {
        cin>>ar[x];
    }
    for(int x=1; x<=N; x++)
    {
        Cnt=1;
        check[x]=1;
        if(x!=ar[x]) f(ar[x]);
        check[x]=0;

        if(Cnt>Max) 
        {
            Max=Cnt;
            Pos=x;
        }
    }
    cout<<Pos;
}