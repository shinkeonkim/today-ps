// 문제 번호: 13316 문제 이름: 30번
// 문제 최초 시도: 2019_05_10
// 문제 풀이 완료: 2019_05_10
// 이 코드의 접근법: 수학, 트리, 구현

#include <iostream>
using namespace std;
int N,a,b;
int main()
{
    cin>>N;
    for(int x=0; x<N; x++)
    {
        cin>>a>>b;
        while(a!=b)
        {
            if(a>b) a/=2;
            else if(a<b) b/=2;
        }
        cout<<a<<"0\n";
        
    }
}