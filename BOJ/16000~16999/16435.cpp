//문제 번호: 16435 문제 이름: 스네이크버드 
// 문제 최초 시도: 2019_04_01
// 문제 풀이 완료: 2019_04_01
// 이 코드의 접근법: 정렬

#include <bits/stdc++.h>
using namespace std;
int N,L;
int ar[1100];
int main()
{
    cin>>N>>L;
    for(int x=0; x<N; x++) cin>>ar[x];
    sort(ar,ar+N);
    for(int x=0; x<N; x++)
    {
        if(ar[x]<=L) L++;
    }
    cout<<L;
}