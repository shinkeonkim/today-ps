// 문제 번호: 15988 문제 이름: 1, 2, 3 더하기 3
// 문제 최초 시도: 2019_04_09
// 문제 풀이 완료: 2019_04_09
// 이 코드의 접근법: DP

#include <iostream>
#define Mod 1000000009
using namespace std;
int D[1100000];
int T,A;
void Init()
{
    D[1]=D[2]=D[3]=1;
    for(int x=1; x<=1000000; x++)
    {
        D[x+1]=(D[x+1]+D[x])%Mod;
        D[x+2]=(D[x+2]+D[x])%Mod;
        D[x+3]=(D[x+3]+D[x])%Mod;
    }
}
int main()
{
    Init();
    cin>>T;
    for(int t=0; t<T; t++)
    {
        cin>>A;
        cout<<D[A]<<"\n";
    }
}