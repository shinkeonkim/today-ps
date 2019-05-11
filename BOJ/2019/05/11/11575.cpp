// 문제 번호: 11575 문제 이름: Affine Cipher
// 문제 최초 시도: 2019_05_11
// 문제 풀이 완료: 2019_05_11
// 이 코드의 접근법: 문자열, 수학

#include <iostream>
#include <string>
using namespace std;
int T,a,b;
string s;
int main()
{
    cin>>T;
    for(int t=0; t<T; t++)
    {
        cin>>a>>b>>s;
        for(auto iter=s.begin(); iter != s.end(); ++iter)
        {
            cout<<(char) ((a*((*iter)-'A')+b)%26 + 'A');
        }
        cout<<endl;
    }
}