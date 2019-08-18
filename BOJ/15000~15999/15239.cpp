// 문제 번호: 15239 문제 이름: Password check 
// 문제 최초 시도: 2019_04_03
// 문제 풀이 완료: 2019_04_03
// 이 코드의 접근법: 구현

#include <bits/stdc++.h>
using namespace std;
int T,N;
int low_cnt,upper_cnt,digit_cnt,symbol_cnt;
string a;
string b = "+_)(*&^%$#@!./,;{}";
bool f(char A)
{
    for(int x=0; x<b.length(); x++) 
    {
        if(A==b[x]) return true;
    }
    return false;
}
int main()
{
    cin>>T;
    for(int t=0; t<T; t++)
    {
        cin>>N>>a;
        bool check=true;
        low_cnt=upper_cnt=digit_cnt=symbol_cnt=0;
        for(int x=0; x<a.length(); x++)
        {
            if('a'<=a[x]&&a[x]<='z') low_cnt++;
            else if('A'<=a[x]&&a[x]<='Z') upper_cnt++;
            else if('0'<=a[x]&&a[x]<='9') digit_cnt++;
            else if(f(a[x])) symbol_cnt++;
            else check=false;
        }
        if(a.length()<12) check=false;
        if(low_cnt==0 || digit_cnt ==0 || upper_cnt ==0 || symbol_cnt ==0 ) check=false;
        if(check) cout<<"valid\n";
        else cout<<"invalid\n";
    }
}