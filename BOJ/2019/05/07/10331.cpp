// 문제 번호: 30331 문제 이름: Miscalculation
// 문제 최초 시도: 2019_05_09
// 문제 풀이 완료: 2019_05_09
// 이 코드의 접근법: 문자열 , 구현 , 수학

#include <iostream>
#include <stack>
#include <string>
using namespace std;

string a;
int N,A,B;
stack <int> stk;
int main()
{
    cin>>a>>N;
    B=a[0]-48;
    for(int x=1; x<a.length(); x+=2)
    {
        if(a[x]=='+')
        {
            B+=a[x+1]-48;
        }
        if(a[x]=='*')
        {
            B*=a[x+1]-48;
        }
    }
    for(int x=0; x<a.length(); x++)
    {
        if(x%2==0) stk.push(a[x]-48);
        if(x%2==1) 
        {
            if(a[x]=='*')
            {
                int k= stk.top();
                stk.pop();
                stk.push(k*(a[x+1]-48));
                x++;
            }
        }
    }
    while(!stk.empty())
    {
        A+=stk.top();
        stk.pop();
    }
    
    if(N==A&&N==B)
    {
        cout<<"U";
    }
    else if(N==A)
    {
        cout<<"M";
    }
    else if(N==B)
    {
        cout<<"L";
    }
    else cout<<"I";

}