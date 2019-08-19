// 문제 번호: 6593 문제 이름: 상범 빌딩
// 문제 최초 시도: 2019_03_18
// 문제 풀이 완료: 2019_03_18
// 이 코드의 접근법: 3차원 BFS

#include <iostream>
#include <queue>
#define Mx 97654321
using namespace std;

struct st{ 
    int Z,Y,X,T; // BFS 탐색을 위한 struct 선언
};

int L,R,C; // L은 빌딩의 층수, R은 빌딩의 행, C는 빌딩의 열
char ar[44][44][44],buf; //빌딩의 정보
int D[44][44][44]; //출발지점부터 각 칸까지 이동할 때의 최소 시간
int Sx,Sy,Sz,Ex,Ey,Ez; //Sx,Sy,Sz는 Start 지점의 좌표 Ex,Ey,Ez는 End 지점의 좌표
int next_Z,next_Y,next_X; // BFS 탐색에서 next 좌표 변수
int dz[]={0,0,0,0,1,-1}; // dz[], dy[], dx[]는 BFS 탐색 방향 배열
int dy[]={0,0,1,-1,0,0};
int dx[]={1,-1,0,0,0,0};

queue <st> que;
st Q;

int main()
{    
    ios_base::sync_with_stdio(true);
    cin.tie(0);
    cout.tie(0);
    while(1)
    {
        cin>>L>>R>>C; //input
        if(L==0&&R==0&&C==0) return 0; //문제 종료 조건

        for(int z=0; z<L; z++)
        {
            for(int y=0; y<R; y++)
            {
                for(int x=0; x<C; x++)
                {
                    cin>>ar[z][y][x]; //input
                    D[z][y][x]=Mx; // D[] 거리 배열 INF로 설정
                    if(ar[z][y][x]=='S') //start 지점 초기화
                    {
                        Sz=z;
                        Sy=y;
                        Sx=x;
                        D[z][y][x]=0;
                    }
                    if(ar[z][y][x]=='E') // End 지점 초기화
                    {
                        Ez=z;
                        Ey=y;
                        Ex=x;
                    }
                }
            }
        }

        que.push({Sz,Sy,Sx,0});
        while(!que.empty()) //BFS 탐색
        {
            st Z=que.front();
            que.pop();
            for(int d=0; d<6; d++)
            {
                next_Z=Z.Z+dz[d];
                next_Y=Z.Y+dy[d];
                next_X=Z.X+dx[d];

                // 유효하지 않은 좌표 탐색 금지
                if(next_Z < 0  || next_Y < 0 || next_X < 0 || next_Z >= L || next_Y >=R || next_X >= C) continue;

                if(ar[next_Z][next_Y][next_X]!='#' && D[next_Z][next_Y][next_X]>Z.T+1) //탐색 조건
                {
                    D[next_Z][next_Y][next_X]=Z.T+1;
                    Q.Z=next_Z;
                    Q.Y=next_Y;
                    Q.X=next_X;
                    Q.T=Z.T+1;
                    que.push(Q);
                }

            }
        }
        // output
        if(D[Ez][Ey][Ex]==Mx) cout<<"Trapped!\n";
        else cout<<"Escaped in "<<D[Ez][Ey][Ex]<<" minute(s).\n";
    }
}