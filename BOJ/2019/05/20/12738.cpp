// 문제 번호: 12738 문제 이름: 가장 긴 증가하는 부분 수열 3
// 문제 최초 시도: 2019_05_20
// 문제 풀이 완료: 2019_05_20
// 이 코드의 접근법: LIS

#include <bits/stdc++.h>
using namespace std;
int N;
int ar[1100000];
vector <int> V;
int main()
{
    cin>>N;
    for(int x=0; x<N; x++) cin>>ar[x];
    V.push_back(ar[0]);
    for(int x=1; x<N; x++)
    {
        if(V.back()<ar[x])
        {
            V.push_back(ar[x]);
        }
        else
        {
            auto iter = lower_bound(V.begin(),V.end(),ar[x]);
            *iter = ar[x];   
        }
    }
    cout<<V.size();
}