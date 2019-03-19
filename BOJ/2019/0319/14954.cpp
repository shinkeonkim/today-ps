// 문제 번호: 14954 문제 이름:Happy Number
// 문제 최초 시도: 2018
// 문제 풀이 완료: 2019_03_19
// 이 코드의 접근법: 구현 또한 루프가 도는 숫자는 최대 9*9*9이다.
#include <iostream>
using namespace std;
int N;
int K,S,check[110000]; //K는 임시 저장 변수, S는 자릿수의 제곱의 합 저장, check[]는 루프를 도는 동안 이전에 나온 수인지 체크
int main()
{
    cin>>N;
    if(N==1) //N==1일 경우 배제
    {
        cout<<"HAPPY";
        return 0;
    }
    K=N;
    while(1) //일단 무한루프를 돌림
    {
        S=0;
        while(K>0) //K의 각 자릿수의 제곱을 S에 더함
        {
            S+=(K%10)*(K%10);
            K/=10;
        }
        if(S==1) //S==1 이라면 행복한 수
        {
            cout<<"HAPPY";
            return 0;
        }
        if(check[S]==1) //만약 이전에 나왔던 수라면 행복하지 않은 수임
        {
            cout<<"UNHAPPY";
            return 0;
        }
        check[S]=1;
        K=S;
    }
}