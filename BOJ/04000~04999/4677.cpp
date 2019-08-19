#include <iostream>
using namespace std;
int D[110][110];
char ar[110][110];
int M,N,cnt;

void DFS(int Y, int X)
{
    D[Y][X]=1;
    for(int dy=-1; dy<=1; dy++)
    {
        for(int dx = -1; dx<=1; dx++)
        {
            if(dy==0&&dx==0) continue;
            if(Y+dy<0 || Y+dy >=M || X+dx<0 || X+dx >=N) continue;

            if(ar[Y+dy][X+dx] == '@' && D[Y+dy][X+dx] == 0)
            {
                DFS(Y+dy,X+dx);
            }
        }
    }


}


int main()
{
    while(true)
    {
        cin>>M>>N;
        cnt=0;
        if(M==0 && N==0)
        {
            break;
        }

        for(int y=0; y<M; y++)
        {
            for(int x=0; x<N; x++)
            {
                cin>>ar[y][x];
                D[y][x]=0;
            }
        }

        for(int y=0; y<M; y++)
        {
            for(int x=0; x<N; x++)
            {
                if(ar[y][x] == '@' && D[y][x] == 0)
                {   
                    cnt++;
                    DFS(y,x);
                }
            }
        }
        cout<<cnt<<endl;
    }
}