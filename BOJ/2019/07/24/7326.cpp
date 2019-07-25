#include <iostream>
using namespace std;
int N,a,b;
int D[5500][5500];
int X,Y,cnt=0,d;
int dx[]={1,1,1,-1};
int dy[]={1,-1,1,1};

int main()
{
    while(X<=5000 || Y<=5000)
    {
        D[X][Y]=cnt;
        X = X+dx[d%4];
        Y = Y+dy[d%4];
        cnt++;
        d++;
    }
    cin>>N;
    for(int x=0; x<N; x++)
    {
        cin>>a>>b;
        if(a==0 && b==0)
        {
            cout<<0<<"\n";
        }
        else
        {
            if(D[a][b] == 0)
            {
                cout<<"No Number\n";
            }
            else cout<<D[a][b]<<"\n";
        }
    }
}