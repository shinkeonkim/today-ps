// 문제 번호: 10157 문제 이름: 자리배정
// 문제 최초 시도: 2019_04_08
// 문제 풀이 완료: 2019_04_08
// 이 코드의 접근법: 구현, 달팽이 배열

#include <iostream>
using namespace std;
int R,C,N,dir=0,X,Y,X_a,Y_a;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int D[1100][1100];
int main()
{
    cin>>C>>R>>N;
    if(R*C<N)
    {
        cout<<0;
        return 0;
    }
    X=Y=1;
    for(int k=1; k<=R*C; k++)
    {
        if(k==N)
        {
            X_a=X;
            Y_a=Y;
        }
        D[Y][X]=k;
        if(1 > Y+dy[dir%4] || Y+dy[dir%4] > R || 1 > X+dx[dir%4] || X+dx[dir%4] >C || D[Y+dy[dir%4]][X+dx[dir%4]]!=0) dir++;
        Y=Y+dy[dir%4];
        X=X+dx[dir%4];
    }
    cout<<X_a<<" "<<Y_a;
    /*cout<<endl;
    for(int y=1; y<=R; y++)
    {
        for(int x=1; x<=C; x++)
        {
            cout<<D[y][x]<<"\t";
        }
        cout<<endl;
    }*/
}