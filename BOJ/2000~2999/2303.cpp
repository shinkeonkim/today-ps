// 문제 번호: 2303 문제 이름: 숫자 게임
// 문제 최초 시도: 2019_05_18
// 문제 풀이 완료: 2019_05_18
// 이 코드의 접근법: 구현

#include <iostream>
#include <vector>
using namespace std;

int N,A,Max,Ans;
vector < vector <int> > V(1100);
int ar[1100];

int f(int Y)
{
    int K=0;
    for(int x=0; x<5; x++)
    {
        for(int y=x+1; y<5; y++)
        {
            for(int z=y+1; z<5; z++)
            {
                K=max(K,(V[Y][x]+V[Y][y]+V[Y][z])%10);
            }
        }
    }
    return K;
}

int main()
{
    cin>>N;
    for(int y=0; y<N; y++)
    {
        for(int x=0; x<5; x++)
        {
            cin>>A;
            V[y].push_back(A);
        }
    }
    for(int y=0; y<N; y++)
    {
        ar[y]=f(y);
    }
    for(int y=0; y<N; y++)
    {
        if(Max<=ar[y])
        {
            Max=ar[y];
            Ans=y+1;
        }
    }
    cout << Ans;
}