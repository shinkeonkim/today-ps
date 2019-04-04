// 문제 번호: 13240 문제 이름: Chessboard 
// 문제 최초 시도: 2019_04_04
// 문제 풀이 완료: 2019_04_04
// 이 코드의 접근법: 구현

#include <iostream>
using namespace std;
int N,M;
int main()
{
    cin>>N>>M;
    for(int y=0; y<N; y++)
    {
        for(int x=0; x<M; x++)
        {
            if((y+x)%2==0) cout<<"*";
            else cout<<".";
        }
        cout<<"\n";
    }
}