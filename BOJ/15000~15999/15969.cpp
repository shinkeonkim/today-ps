// 문제 번호:15969 문제 이름: 행복
// 문제 최초 시도: 2019_03_18
// 문제 풀이 완료: 2019_03_18
// 이 코드의 접근법: 최소 최대값 갱신하면서 슬라이딩

#include <iostream>
using namespace std;
int N,A,Min=9001,Max=-1;
int main()
{
    cin>>N;
    for(int x=0; x<N; x++)
    {
        cin>>A; // input
        if(A>Max) Max=A; //Max 갱신
        if(A<Min) Min=A; //Min 갱신
    }
    cout<<Max-Min; //output
}