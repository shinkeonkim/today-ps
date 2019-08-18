// 문제 번호: 15922 문제 이름: 아우으 우아으이야!!
// 문제 최초 시도: 2018
// 문제 풀이 완료: 2019_03_25
// 이 코드의 접근법: 스위핑, 스택(큐)
// 이전의 범위에 현재 범위가 포함될 경우 스킵
// 이전의 범위와 현재 범위가 겹칠 경우 확장
// 이전의 범위와 현재 범위와 안 겹칠 경우 추가

#include <bits/stdc++.h>
using namespace std;
struct st{
    long long A,B;
};

st ar[110000]; 
long long N,S;
stack <st> stk;
st K;
int main()
{
    cin>>N; //input
    for(int x=0; x<N; x++) cin>>ar[x].A>>ar[x].B; //input
    stk.push(ar[0]); 
    for(int x=1; x<N; x++)
    {
        K=stk.top();
        stk.pop();
        if(ar[x].A<=K.B && ar[x].B >= K.B) // 범위가 겹칠경우
        {
            K.B=ar[x].B;
            stk.push(K);
        }
        else if(ar[x].A<=K.B &&  ar[x].B < K.B) //범위가 포함될 경우
        {
            stk.push(K);
        }
        else //범위가 겹치지 않을 경우
        {
            stk.push(K);
            stk.push(ar[x]);
        }
    }
    while(!stk.empty()) // 스택에 쌓아놓은 범위들 저장
    {
        S+=stk.top().B-stk.top().A;
        stk.pop();
    }
    cout<<S; //답 출력

}