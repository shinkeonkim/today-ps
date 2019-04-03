// 문제 번호: 15240 문제 이름: Paint bucket 
// 문제 최초 시도: 2019_04_03
// 문제 풀이 완료: 2019_04_03
// 이 코드의 접근법: DFS/BFS
// paint를 시작한 좌표의 색깔이 칠할 색깔과 다른 경우
// 같은 색깔을 가진 인접한 좌표들을 DFS로 방문하면서 색깔을 변경한다.

#include <iostream>
#include <cstdio>
using namespace std;
int R,C,Y,X,K,A;
int dy[]={0,0,1,-1},dx[]={1,-1,0,0};
int ar[1100][1100];

void DFS(int y,int x)
{
    ar[y][x]=K;
    for(int d=0; d<4; d++)
    {
        int ny=y+dy[d];
        int nx=x+dx[d];
        if(ny<0 || ny >= R || nx<0 || nx >= C) continue;

        if(ar[ny][nx]==A)
        {
            DFS(ny,nx);
        }
    }
}
int main()
{
    cin>>R>>C;
    for(int y=0; y<R; y++)
    {
        for(int x=0; x<C; x++) scanf("%1d",&ar[y][x]);
    }
    cin>>Y>>X>>K;
    if(ar[Y][X]!=K)
    {
        A=ar[Y][X];
        DFS(Y,X);
    }
    for(int y=0; y<R; y++)
    {
        for(int x=0; x<C; x++)
        {
            cout<<ar[y][x];
        }
        cout<<endl;
    }
}   