// 문제 번호: 4592 문제 이름: 중복을 없애자
// 문제 최초 시도: 2019_04_06
// 문제 풀이 완료: 2019_04_06
// 이 코드의 접근법: 구현

#include <iostream>
using namespace std;
int N,ar[110],A;
int main()
{
    while(true)
    {
        cin>>N;
        if(N==0) return 0;
        for(int x=0; x<N; x++)
        {
            cin>>ar[x];
        }
        cout<<ar[0]<<" ";
        for(int x=1; x<N; x++)
        {
            if(ar[x]!=ar[x-1]) cout<<ar[x]<<" ";
        }
        cout<<"$\n";
    }
}