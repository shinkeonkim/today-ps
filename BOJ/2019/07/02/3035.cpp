#include <iostream>
using namespace std;
int R,C,ZR,ZC;
char ar[55][55];
int main()
{
    cin>>R>>C>>ZR>>ZC;
    for(int y=0; y<R; y++)
    {
        for(int x=0; x<C; x++)
        {
            cin>>ar[y][x];
        }
    }

    for(int y=0; y<R; y++)
    {
        for(int y2=0; y2<ZR; y2++)
        {
            for(int x=0; x<C; x++)
            {
                for(int x2=0; x2<ZC; x2++)
                {
                    cout<<ar[y][x];
                }
            }
            cout<<endl;
        }
    }
} 