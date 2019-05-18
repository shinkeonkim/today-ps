// 문제 번호: 16564 문제 이름: 히오스 프로게이머
// 문제 최초 시도: 2019_05_18
// 문제 풀이 완료: 2019_05_18
// 이 코드의 접근법: 이진 탐색

#include <iostream>
using namespace std;
long long N,K,Max=-1;
long long ar[1100000];
long long s=0,e=1000000001,mid;
int main()
{
    cin>>N>>K;
    for(int x=0; x<N; x++) cin>>ar[x];

    while(s<=e)
    {
        mid=(s+e)/2;
        long long S=0;
        for(int x=0; x<N; x++)
        {
            if(ar[x]<mid) S+=mid-ar[x]; 
        }
        if(S>K)
        {
            e=mid-1;
        }
        else
        {
            if(Max<mid) Max=mid;
            s=mid+1;
        }
    }
    cout<<Max;
}