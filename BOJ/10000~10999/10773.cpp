//문제 번호:10773 문제 이름: 제로
// 문제 최초 시도: 2019_03_27
// 문제 풀이 완료: 2019_03_27
// 이 코드의 접근법: 스택 || 큐 모두 접근 가능
// i번째 수가 0이 아니면 스택 혹은 큐에 데이터를 push
// i번째 수가 0이라면 스택 혹은 큐에 데이터를 pop

#include <iostream>
#include <stack>
using namespace std;
stack <unsigned long long> stk;
unsigned long long N,A,S;
int main()
{
    cin>>N;
    for(int x=0; x<N; x++)
    {
        cin>>A;
        if(A==0) stk.pop();
        else stk.push(A);
    }
    while(!stk.empty()) 
    {
        S+=stk.top();
        stk.pop();
    }
    cout<<S;
}