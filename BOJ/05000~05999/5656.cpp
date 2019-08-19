//문제 번호: 5656 문제 이름: 비교 연산자
// 문제 최초 시도: 2019_03_28
// 문제 풀이 완료: 2019_03_28
// 이 코드의 접근법: 구현

#include <bits/stdc++.h>
using namespace std;
int A,B,Cnt=1;
string a;
int main()
{
    while(1)
    {
        cin>>A>>a>>B;
        if(a=="E") return 0;
        cout<<"Case "<<Cnt<<": ";
        Cnt++;
        if(a==">")
        {
            if(A>B) cout<<"true";
            else cout<<"false";
        }
        if(a==">=")
        {
            if(A>=B) cout<<"true";
            else cout<<"false";
        }
        if(a=="<")
        {
            if(A<B) cout<<"true";
            else cout<<"false";
        }
        if(a=="<=")
        {
            if(A<=B) cout<<"true";
            else cout<<"false";
        }
        if(a=="==")
        {
            if(A==B) cout<<"true";
            else cout<<"false";
        }
        if(a=="!=")
        {
            if(A!=B) cout<<"true";
            else cout<<"false";
        }
        cout<<endl;
    }
}