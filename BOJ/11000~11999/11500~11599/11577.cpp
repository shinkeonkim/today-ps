// 문제 번호: 11577 문제 이름: Condition of deep sleep
// 문제 최초 시도: 2019_05_11
// 문제 풀이 완료: 2019_05_11
// 이 코드의 접근법: 그리디 알고리즘, DP

#include <iostream>
using namespace std;
int N,K,Cnt,tCnt;
int ar[110000];
int D[220000];
int main()
{
    cin>>N>>K;
    for(int x=0; x<N; x++) cin>>ar[x];
    for(int x=0; x<N; x++)
    {
        Cnt-=D[x];
        if((ar[x]+Cnt)%2==1&&x+K<=N)
        {
            ar[x]=0;
            tCnt++;
            Cnt++;
            D[x+K]++;
        }
        else if((ar[x]+Cnt)%2==1)
        {
            ar[x]=1;
        }
        else if((ar[x]+Cnt)%2==0)
        {
            ar[x]=0;
        }
    }
    for(int x=0; x<N; x++)
    {
        if(ar[x]==1)
        {
            cout<<"Insomnia";
            return 0;
        }
    }
    cout<<tCnt;
}