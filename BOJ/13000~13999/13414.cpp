// 문제 번호: 13414 문제 이름: 수강신청
// 문제 최초 시도: 2019_05_03
// 문제 풀이 완료: 2019_05_03
// 이 코드의 접근법: Map 자료구조, 구조체 정렬

#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

struct st
{
    string a;
    int K;
};

map <string , int> M;
st ar[550000];

int k,N,C;
string A;

bool compare(st X,st Y)
{
    if(X.K<Y.K) return true;
    return false;
}

int main()
{
    cin>>k>>N;

    for(int x=0; x<N; x++)
    {
        cin>>A;
        M[A]=x;
    }

    C=0;
    for(auto iter= M.begin(); iter!=M.end(); ++iter)
    {
        ar[C].a= iter -> first;
        ar[C].K= iter -> second;
        C++;
    }

    sort(ar,ar+C,compare);
    
    for(int x=0; x<k && x<C; x++)
    {
        cout<<ar[x].a<<"\n";
    }
}