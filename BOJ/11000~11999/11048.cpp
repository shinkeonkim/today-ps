// 문제 번호: 11048 문제 이름: 이동하기
// 문제 최초 시도: 2019_03_25
// 문제 풀이 완료: 2019_03_25
// 이 코드의 접근법: DP
// D[y][x]=max(D[y-1][x],D[y][x-1])를 위,왼쪽부터 적용해서 DP 배열 채우기

#include <bits/stdc++.h>
using namespace std;
int N,M; // N: 세로사이즈, M 가로사이즈
int ar[1100][1100]; // 문제에서 주어진 미로 데이터를 입력받는 배열
int D[1100][1100]; // DP table
int main()
{
    cin>>N>>M; //input
    for(int y=0; y<N; y++)
    {
        for(int x=0; x<M; x++)
        {
            cin>>ar[y][x]; //ar[][] input
        }
    }

    for(int y=0; y<N; y++)
    {
        for(int x=0; x<M; x++)
        {
            if(y==0&&x==0) // y==0&&x==0 인경우는 ar[0][0] 저장
            {
                D[y][x]=ar[y][x];
            }
            else if(y==0) //y==0 일때는 바로 왼쪽(D[y][x-1])과 ar[y][x]를 더해 저장
            {
                D[y][x]=D[y][x-1]+ar[y][x];
            }
            else if(x==0) //x==0 일때는 바로 위쪽(D[y-1][x])와 ar[y][x]를 더해 저장
            {
                D[y][x]=D[y-1][x]+ar[y][x];
            }
            else // 그 외의 경우, 비교해서 저장
            {
                D[y][x]=max(D[y-1][x],D[y][x-1])+ar[y][x];
            }            
        }
    }

    cout<<D[N-1][M-1];

}