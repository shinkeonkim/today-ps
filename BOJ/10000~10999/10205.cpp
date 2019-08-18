// 문제 번호: 10205 문제 이름: 헤라클레스와 히드라
// 문제 최초 시도: 2019_05_01
// 문제 풀이 완료: 2019_05_01
// 이 코드의 접근법: 구현

#include <iostream>
#include <string>
using namespace std;
int T,N;
string a;
int main()
{
    cin>>T;
    for(int t=0; t<T; t++)
    {
        cin>>N>>a;
        for(auto iter=a.begin(); iter!=a.end(); ++iter)
        {
            if(*iter == 'c') N++;
            else if(*iter == 'b') N--;
        }
        cout<<"Data Set "<<t+1<<":\n";
        cout<<N<<"\n\n";
    }
}