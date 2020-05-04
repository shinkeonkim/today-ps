//문제 번호: 5523 문제 이름: 경기 결과
// 문제 최초 시도: 2019_03_28
// 문제 풀이 완료: 2019_03_28
// 이 코드의 접근법: 구현

#include <iostream>
using namespace std;
int N,A,B,a,b;
int main()
{
    cin>>N;
    for(int x=0; x<N; x++)
    {
        cin>>a>>b;
        if(a>b) A++;
        if(a<b) B++;
    }
    cout<<A<<" "<<B;
}
