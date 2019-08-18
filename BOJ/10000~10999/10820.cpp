// 문제 번호: 10820 문제 이름: 문자열 분석
// 문제 최초 시도: 2019_03_26
// 문제 풀이 완료: 2019_03_26
// 이 코드의 접근법: 문자열, 단순 구현

#include <bits/stdc++.h>
using namespace std;
string ar;
int a,b,c,d;
int main()
{
    while(getline(cin,ar))
    {   
        a=b=c=d=0;
        for(int x=0; x<ar.length(); x++)
        {
            if('a'<=ar[x]&&ar[x]<='z') a++;
            if('A'<=ar[x]&&ar[x]<='Z') b++;
            if('0'<=ar[x]&&ar[x]<='9') c++;
            if(ar[x] == ' ') d++;
        }
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
    }
}