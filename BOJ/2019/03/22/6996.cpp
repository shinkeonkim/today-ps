// 문제 번호: 6996 문제 이름: 애너그램
// 문제 최초 시도: 2019_03_22
// 문제 풀이 완료: 2019_03_22
// 최초 접근법 : 정렬

#include <bits/stdc++.h>
using namespace std;
int N;
string a,b;
vector <int> V1;
vector <int> V2;
int main()
{
    cin>>N;
    for(int x=0; x<N; x++)
    {
        cin>>a>>b;
        while(!V1.empty()) V1.pop_back();
        while(!V2.empty()) V2.pop_back();

        for(int x=0; x<a.length(); x++)
        {
            V1.push_back(a[x]);       
        }
        for(int x=0; x<b.length(); x++)
        {
            V2.push_back(b[x]);       
        }

        sort(V1.begin(),V1.end());
        sort(V2.begin(),V2.end());

        if(V1.size()!=V2.size())
        {
            cout<<a<<" & "<<b<<" are NOT anagrams.";
            cout<<"\n";
        }
        else
        {
            int check=0;
            for(int x=0; x<V1.size(); x++)
            {
                if(V1[x]!=V2[x])
                {
                    check=1;
                }
            }
            if(check==1) cout<<a<<" & "<<b<<" are NOT anagrams.";
            else cout<<a<<" & "<<b<<" are anagrams.";
            cout<<"\n";
        }
        
    }
}