// 문제 번호: 15233 문제 이름: Final Score 
// 문제 최초 시도: 2019_04_04
// 문제 풀이 완료: 2019_04_04
// 이 코드의 접근법: 구현

#include <bits/stdc++.h>
using namespace std;
int A,B,C,a,b,x,y;
string T_a[22];
string T_b[22];
string S[110];
int main()
{
    cin>>A>>B>>C;
    for(x=0; x<A; x++) cin>>T_a[x];
    for(x=0; x<B; x++) cin>>T_b[x];
    for(x=0; x<C; x++) cin>>S[x];
    for(x=0; x<C; x++)
    {
        for(y=0; y<A; y++)
        {
            if(S[x]==T_a[y]) a++;
        }
        for(y=0; y<B; y++)
        {
            if(S[x]==T_b[y]) b++;
        }
    }
    if(a>b) cout<<"A";
    else if(a<b) cout<<"B";
    else cout<<"TIE";
}