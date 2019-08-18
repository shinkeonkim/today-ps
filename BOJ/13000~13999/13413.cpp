// 문제 번호: 13413 문제 이름: 오셀로 재배치
// 문제 최초 시도: 2019_05_04
// 문제 풀이 완료: 2019_05_04
// 이 코드의 접근법: 수학 , 구현

#include <iostream>
#include <algorithm>
using namespace std;
int Cnta,Cntb;
int T,N;
string a,b;
int main()
{
    cin>>T;
    for(int t=0; t<T; t++)
    {
        cin>>N>>a>>b;
        Cnta=Cntb=0;
        for(int x=0; x<N; x++)
        {
            if(a[x]=='W' && b[x] == 'B') Cnta++;
            if(a[x]=='B' && b[x] == 'W') Cntb++;
        }
        cout<<Cnta+Cntb-min(Cnta,Cntb)<<"\n";
    }
}