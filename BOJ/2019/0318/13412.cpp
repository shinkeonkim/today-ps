// 문제 번호:13412 문제 이름: 서로소 쌍
// 문제 최초 시도: 2019_03_18
// 문제 풀이 완료: 2019_03_18
// 이 코드의 접근법: 어떤 수 a, b가 있을 때, a와 b의 최소공배수는 N이고 최대 공약수가 1이라면
// (a*b)/1=N => 따라서 a*b==N을 만족하고 gcd(a,b)==1인 케이스를 세면 된다.

#include <iostream>
using namespace std;

long long T,N,ans,ar[550000]; //T는 테스트 케이스 개수, ar[]은 테스트 케이스 배열, N은 문제에서 주어지는 수들, ans는 답

long long gcd(long long A,long long B) //gcd(두 수 사이의 최대 공약수) 함수
{
    return B>0?gcd(B,A%B):A;
}

int main()
{
    cin>>T; //input
    for(int t=0; t<T; t++) cin>>ar[t];

    for(int t=0; t<T; t++)
    {
        ans=0;
        N=ar[t];
        if(N==1) //1일때는 (1,1) 로 1개 존재
        {
            cout<<1<<endl;
            continue;
        }
        for(long long x=1; x*x<N; x++) // 1이 아닐때, 위의 설명대로 계산
        {
            if(N%x==0 && gcd(x,N/x)==1 )
            {
                ans++;
            }
        }
        cout<<ans<<endl; //output
    }
}