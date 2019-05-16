#include <iostream>
using namespace std;
int T;
int ar[10][10];

bool g()
{
    
}

int main()
{
    cin>>T;
    for(int t=0; t<T; t++)
    {
        for(int y=0; y<9; y++)
        {
            for(int x=0; x<9; x++)
            {
                cin>>ar[y][x];
            }
        }

        if(g())
        {
            cout<<"INCORRECT";
        }
        else cout<<"CORRECT";
    }
    

}