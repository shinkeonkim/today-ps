// 문제 번호: 1406 문제 이름: 에디터
// 문제 최초 시도: 2019_04_09
// 문제 풀이 완료: 2019_04_09
// 이 코드의 접근법: 스택, 구현

#include <bits/stdc++.h>
using namespace std;
string a;
int N;
char K1,K2;
stack <char> L;
stack <char> R;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>a;
    for(auto iter=a.begin(); iter!=a.end(); iter++) L.push(*iter);
    cin>>N;
    for(int x=0; x<N; x++)
    {
        cin>>K1;
        switch(K1)
        {
            case 'P':
                cin>>K2;
                L.push(K2);
                break;
            case 'L':
                if(!L.empty()) 
                {
                    R.push(L.top());
                    L.pop();
                }
                break;
            case 'D':
                if(!R.empty())
                {
                    L.push(R.top());
                    R.pop();
                }
                break;
            case 'B':
                if(!L.empty())
                {
                    L.pop();
                }
                break;
        }
    }
    while(!L.empty())
    {
        R.push(L.top());
        L.pop();
    }
    while(!R.empty())
    {
        cout<<R.top();
        R.pop();
    }
}