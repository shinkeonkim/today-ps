// 문제 번호: 15241 문제 이름: Counting paths
// 문제 최초 시도: 2019_04_03
// 문제 풀이 완료: 2019_04_03
// 이 코드의 접근법: DP
// X가 있는 칸에는 접근하지 않고 DP배열을 채우면 됨.

#include <iostream>
#define Mod 1000000007
using namespace std;
long long R,C;
char ar[220][220];
long long D[220][220];
int main()
{
    cin>>R>>C;
    for(int y=0; y<R; y++)
    {
        for(int x=0; x<C; x++) cin>>ar[y][x];
    }

    for(int y=0; y<R; y++)
    {
        for(int x=0; x<C; x++)
        {
            if(y==0&&x==0) D[y][x]=1;
            else if(y==0)
            {
                if(ar[y][x-1]!='X') D[y][x]=D[y][x-1];
            }
            else if(x==0)
            {
                if(ar[y-1][x]!='X') D[y][x]=D[y-1][x];
            }
            else 
            {
                if(ar[y][x-1]!='X') D[y][x]+=D[y][x-1];
                if(ar[y-1][x]!='X') D[y][x]+=D[y-1][x];
                D[y][x]%=Mod;
            }
        }
    }
    cout<<D[R-1][C-1]%Mod;
}
