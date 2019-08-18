// 문제 번호: 13411 문제 이름: 하늘에서 정의가 빗발친다!
// 문제 최초 시도: 2019_03_26
// 문제 풀이 완료: 2019_03_26
// 이 코드의 접근법: 정렬

#include <bits/stdc++.h>
using namespace std;
//struct 선언
struct st{
    unsigned long long X,Y,V,D,T;
};
//데이터 N개
int N;
st ar[220000];

bool compare(st a,st b) // D/(V*V) 가 작을 수록 빨리 부딪침=> 데이터가 앞에 위치해야함. 
{
    if(a.D*b.V*b.V < a.V*a.V*b.D) return true;
    else if(a.D*b.V*b.V == a.V*a.V*b.D)
    {
        if(a.T<b.T) return true;
    }
    return false;
}

int main()
{
    cin>>N; //input
    for(int x=0; x<N; x++) cin>>ar[x].X>>ar[x].Y>>ar[x].V; //input
    for(int x=0; x<N; x++)
    {
        ar[x].T = x+1; //T 초기화
        ar[x].D=(ar[x].X*ar[x].X) + (ar[x].Y*ar[x].Y); //D 초기화
    }
    sort(ar,ar+N,compare); // 정렬
    for(int x=0; x<N; x++) cout<<ar[x].T<<"\n"; //출력
}