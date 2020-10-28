// 문제 번호: 13301 문제 이름: 타일 장식물 
// 문제 최초 시도: 2019_04_01
// 문제 풀이 완료: 2019_04_01
// 이 코드의 접근법: 피보나치 수열

#include <iostream>
using namespace std;
long long ar[88],S;
int N;
int main()
{
    cin>>N;
    ar[1]=ar[2]=1;
    for(int x=3; x<=N; x++)
    {
        ar[x]=ar[x-1]+ar[x-2];
    }
    S=ar[N]*4+ar[N-1]*2;
    cout<<S;
}