// 문제 번호: 6588 문제 이름: 골드바흐의 추측
// 문제 최초 시도: 2019_05_03
// 문제 풀이 완료: 2019_05_03
// 이 코드의 접근법: 소수 , 에라토스테네스의 채 , 시간 복잡도 개선

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N,T;
int D[9900000];
vector <int> V;
int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    for(int x=2; x<=1000000; x++)
    {
        D[x]=x;
    }
    for(int x=2; x<=1000000; x++)
    {
        if(D[x]==x)
        {
            V.push_back(x);
            for(int y=x+x; y<=1000000; y+=x)
            {
                D[y]=0;
            }
        }
    }
    while(1)
    {
        cin>>N;
        if(N==0) break;
        for(int k=0; k<V.size() && V[k]<= N/2; k++)
        {
            if(D[N-V[k]]==N-V[k])
            {
                cout<<N<<" = "<<V[k]<<" + "<<N-V[k]<<"\n";
                break;
            }
        }
    }   
}