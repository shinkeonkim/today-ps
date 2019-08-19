#include <iostream>
using namespace std;
int N,M,K,a,b;
int cnt,ans;
int ar[110][110];
int check[110][110];
int dy[]={1,-1,0,0};
int dx[]={0,0,1,-1};

bool f(int Y,int X)
{
    if(Y<=0 || X<=0 || Y>N || X>M) return false;
    return true;
}

void DFS(int Y,int X)
{
    check[Y][X]=1;
    cnt++;
    for(int d=0; d<4; d++)
    {
        if(!f(Y+dy[d],X+dx[d])) continue;
        if(check[Y+dy[d]][X+dx[d]] == 0 && ar[Y+dy[d]][X+dx[d]] == 1)
        {
            DFS(Y+dy[d],X+dx[d]);
        }
    }

}

int main()
{
    cin>>N>>M>>K;
    for(int x=0; x<K; x++)
    {
        cin>>a>>b;
        ar[a][b]=1;
    }
    for(int y=1; y<=N; y++)
    {
        for(int x=1; x<=M; x++)
        {
            if(ar[y][x] == 1)
            {
                cnt=0;
                DFS(y,x);
                if(cnt>ans) ans=cnt;
            }
        }
    }
    cout<<ans;

}