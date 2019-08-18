// 문제 번호: 10972 문제 이름: 다음 순열
// 문제 최초 시도: 2019_03_26
// 문제 풀이 완료: 2019_03_26
// 이 코드의 접근법: next_permutation

#include <bits/stdc++.h>
using namespace std;
int N,A;
vector <int> V;
int main()
{
    cin>>N;
    for(int x=0; x<N; x++)
    {
        cin>>A;
        V.push_back(A);
    }
    if(next_permutation(V.begin(),V.end())) //next_permutation이 가능한가?
    {
        for(int x=0; x<V.size(); x++) cout<<V[x]<<" "; //가능하다면 출력
    }
    else
    {
        cout<<-1; //불가능하면 -1 출력
    }
    
}