//문제 번호: 12833 문제 이름: XORXORXOR 
// 문제 최초 시도: 2019_04_01
// 문제 풀이 완료: 2019_04_01
// 이 코드의 접근법: 
// XOR 연산을 짝수번을 적용하면 다시 원래 수로 돌아오게 된다.
// 따라서 홀수번을 적용한 경우는 XOR연산을 한번만 적용하면 되고
// 짝수번을 적용한 경우는 원래의 수를 적용하면 된다.

#include <iostream>
using namespace std;
int A,B,C;
int main()
{
    cin>>A>>B>>C;
    if(C%2==1)
    {
        cout<< (A^B);
    }
    else
    {
        cout<<A;
    }
}