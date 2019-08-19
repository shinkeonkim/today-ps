// 문제 번호: 1449 문제 이름: 수리공 항승
// 문제 최초 시도: 2019_05_07
// 문제 풀이 완료: 2019_05_07
// 이 코드의 접근법: 그리디

#include <iostream>
#include <algorithm>
using namespace std;
int N,L,S,Z,ar[1100];
int main()
{
    cin>>N>>L;
    for(int x=0; x<N; x++) cin>>ar[x];
    sort(ar,ar+N);
    S++;
    Z=ar[0];
    for(int x=1; x<N; x++)
    {
        if(L<=ar[x]-Z)
        {
            S++;
            Z=ar[x];
        }
    }
    cout<<S;
}