//문제 번호: 16785 문제 이름: ソーシャルゲーム 
// 문제 최초 시도: 2019_03_30
// 문제 풀이 완료: 2019_03_30
// 이 코드의 접근법: 구현

#include <iostream>
using namespace std;
int A,B,C,S,K;
int main()
{
    cin>>A>>B>>C;
    while(S<C)
    {
        K++;
        S+=A;
        if(K!=0&&K%7==0)
        {
            S+=B;
        }
    }
    cout<<K;
}