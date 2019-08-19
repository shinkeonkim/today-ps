// 문제 번호:2206 문제 이름: 벽 부수고 이동하기
// 문제 최초 시도: 2019_03_12
// 문제 풀이 완료: 2019_03_12
// 이 코드의 접근법: BFS로 탐색
// 만약 ar[next_Y][next_X]가 1일 때, 지금까지 벽을 뚫지 않았다면 뚫고나서 벽을 뚫음을 체크 혹은 벽을 뚫었다면 경로 멈춤
// 만약 ar[next_Y][next_X]가 0일 때, 지금까지 벽을 뚫었건 안뚫었건 그대로 통과

#include <iostream>
#include <queue>
#include <cstdio>
#include <algorithm>
#define Mx 987654321 //Mx 값 선언
using namespace std;

struct st{
    int Y,X,C,D; //Y,X는 점의 좌표 C는 지금까지의 경로에서 벽을 뚤었으면 1, 아니면 0 D는 이 점까지 올때까지의 경로 길이
};

int ans,N,M,ar[1100][1100],D[1100][1100][2]; 
//ans는 최종 답, N은 세로 길이, M은 가로 길이, ar는 맵 입력받는 배열, D[y][x]는 (y,x) 까지의 경로 길이
int dy[]={0,0,1,-1};
int dx[]={1,-1,0,0};
// 위에 2줄로 BFS 4방향 탐색 편리하게
st Q; //queue에 넣을 struct 변수
queue <st> que; //BFS에 사용되는 Q선언
int main()
{
    cin>>N>>M;
    for(int y=0; y<N; y++)
    {
        for(int x=0; x<M; x++) scanf("%1d",&ar[y][x]);
    } //입력

    for(int y=0; y<N; y++)
    {
        for(int x=0; x<M; x++)
        {
            D[y][x][0]=D[y][x][1]=Mx;
        }   
    } //D[y][x]를 일단 최댓값으로 저장

    Q.Y=0; Q.X=0; Q.D=1; Q.C=ar[0][0]; D[0][0][ar[0][0]]=1; //시작지점 초기화

    que.push(Q);
    while(!que.empty())
    {
        st Z;
        Z=que.front();
        que.pop();
        for(int d=0; d<4; d++) // 4방향 탐색
        {
            int next_X=Z.X+dx[d];
            int next_Y=Z.Y+dy[d]; //다음 (X,Y) 좌표
               
            if(0<=next_X && next_X<M && 0<=next_Y && next_Y<N) // 다음(X,Y) 좌표가 맵의 유효한 좌표인지 판단
            {
                if(ar[next_Y][next_X]==1 && Z.C==0) //Z.C는 지금까지 벽을 부순 횟수라고 해석할 수 있음. (다음 좌표에 벽이 있고 지금까지 벽을 부수지 않은 경우)
                {
                    if(D[next_Y][next_X][1]>Z.D+1) //다음 좌표에 저장된 거리가 지금까지의 경로 거리+1보다 큰경우 갱신+큐에 삽입
                    {       
                        D[next_Y][next_X][1]=Z.D+1;
                        Q.X=next_X;
                        Q.Y=next_Y;
                        Q.C=1;
                        Q.D=Z.D+1;
                        que.push(Q);
                    }
                }
                else if(ar[next_Y][next_X]==0) //(다음 좌표에 벽이 없는 경우)
                {
                    if(D[next_Y][next_X][Z.C]>Z.D+1) //다음 좌표에 저장된 거리가 지금까지의 경로 거리+1보다 큰경우 갱신+큐에 삽입
                    {       
                        D[next_Y][next_X][Z.C]=Z.D+1;
                        Q.X=next_X;
                        Q.Y=next_Y;
                        Q.C=Z.C;
                        Q.D=Z.D+1;
                        que.push(Q);
                    }
                }
            }
        }
    }
    ans = min(D[N-1][M-1][0],D[N-1][M-1][1]); //벽을 한번 부순 경우와 안 부순 경우 중 최소 거리 판단
    if(ans==Mx) cout<<-1; // 두 경우가 모두 Mx(INF)인 경우 도달하지 못한것
    else cout<<ans; //answer 출력
}
