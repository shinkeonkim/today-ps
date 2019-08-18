// 문제 번호: 11328 문제 이름: strfry
// 문제 최초 시도: 2019_03_26
// 문제 풀이 완료: 2019_03_26
// 이 코드의 접근법: 구성요소가 같다는 것을 비교하는 것은 정렬을 이용하면 된다.

#include <bits/stdc++.h>
using namespace std;
int N;
string a,b;
vector <char> V1,V2;
int main()
{
    cin>>N;
    for(int x=0; x<N; x++)
    {
        cin>>a>>b;
        for(int x=0; x<a.length(); x++) V1.push_back(a[x]); // V1 벡터에 삽입
        for(int x=0; x<b.length(); x++) V2.push_back(b[x]); // V2 벡터에 삽입

        sort(V1.begin(),V1.end()); //sorting
        sort(V2.begin(),V2.end()); //sorting
        int check=1; //check가 1이면 가능, check가 0이면 불가능
        if(V1.size()==V2.size()) //두 벡터의 크기가 다르면 의미 없음.
        {
            for(int x=0; x<V1.size(); x++)
            {
                if(V1[x]!=V2[x]) check=0; //서로다른 요소가 존재
            }
        }
        else
        {
            check=0;
        }
        if(check==1) cout<<"Possible\n";
        else cout<<"Impossible\n";

        while(!V1.empty())V1.pop_back(); //벡터 초기화
        while(!V2.empty())V2.pop_back(); //벡터 초기화
    }
}