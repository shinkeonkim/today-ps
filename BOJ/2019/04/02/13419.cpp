// 문제 번호: 13419 문제 이름: 탕수육 
// 문제 최초 시도: 2019_04_02
// 문제 풀이 완료: 2019_04_02
// 이 코드의 접근법: 문자열
// 문자열 a의 길이가 짝수인 경우
// 두 사람은 짝수번째의 문자와 홀수 번째의 문자를 나누어 말하게 된다.
// 문자열 a의 길이가 홀수인 경우
// 한 사람은 짝수번째의 문자를 다 말한 뒤, 홀수 번째의 문자를 말하게 된다.
// 다른 사람은 홀수번째의 문자를 다 말한 뒤, 짝수번째의 문자를 말하게 된다.

#include <bits/stdc++.h>
using namespace std;
int N;
string a;
int main()
{
    cin>>N;
    for(int t=0; t<N; t++)
    {
        cin>>a;
        if(a.length()%2==0)
        {
            for(int x=0; x<a.length(); x+=2)
            {
                cout<<a[x];
            }
            cout<<endl;
            for(int x=1; x<a.length(); x+=2)
            {
                cout<<a[x];
            }
            cout<<endl;
        }
        else
        {
            for(int x=0; x<a.length(); x+=2)
            {
                cout<<a[x];
            }
            for(int x=1; x<a.length(); x+=2)
            {
                cout<<a[x];
            }
            cout<<endl;


            for(int x=1; x<a.length(); x+=2)
            {
                cout<<a[x];
            }
            for(int x=0; x<a.length(); x+=2)
            {
                cout<<a[x];
            }
            cout<<endl;
        }
        
    }
    
}