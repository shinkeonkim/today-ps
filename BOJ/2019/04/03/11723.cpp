// 문제 번호: 11723 문제 이름: 집합 
// 문제 최초 시도: 2019_04_03
// 문제 풀이 완료: 2019_04_03
// 이 코드의 접근법: 구현

#include <iostream>
using namespace std;
int M,N,Set[22];
string Q;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin>>M;
    for(int x=0; x<M; x++)
    {
        cin>>Q;
        if(Q == "all")
        {
            for(int x=1; x<=20; x++) Set[x]=1;
            continue;
        }
        else if(Q == "empty")
        {
            for(int x=1; x<=20; x++) Set[x]=0;
            continue;
        }
        cin>>N;
        if(Q == "add") Set[N]=1;
        else if(Q == "remove") Set[N]=0; 
        else if(Q == "check") cout<<Set[N]<<"\n";
        else if(Q == "toggle") Set[N]=1-Set[N];
    }
}