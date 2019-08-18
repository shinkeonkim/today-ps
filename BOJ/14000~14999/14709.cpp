#include <iostream>
using namespace std;
int N,a,b,cnt,cnt2;
int ar[7][7];
int main()
{
    cin>>N;
    for(int x=0; x<N; x++)
    {
        cin>>a>>b;
        ar[a][b]=1;
        ar[b][a]=1;
    }
    for(int x=1; x<=5; x++)
    {
        for(int y=x+1; y<=5; y++)
        {
            if(ar[x][y])
            {
                if(x==1 && y== 3) cnt++;
                else if(x==1 && y==4) cnt++;
                else if(x==3 && y== 4) cnt++;
                else cnt2++;
            }
        }
    }
    if(cnt2>0 || cnt !=3)
    {
        cout<<"Woof-meow-tweet-squeek";
    }
    else
    {
        cout<<"Wa-pa-pa-pa-pa-pa-pow!";
    }
}