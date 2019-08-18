#include <iostream>
using namespace std;
int check[33];
int ar[6][6];

void judge()
{
    bool C= true;
    if()






}



void g()
{
    for(int y=0; y<5; y++)
    {
        for(int x=0; x<5; x++)
        {
            bingo[y][x]=check[y*5+x];
        }
    }

    judge()
}


void f(int K)
{
    if(K == 24)
    {
        for(int x=0; x<2; x++)
        {
            check[K]=x;
            g();
        }
    }
    else
    {
        for(int x=0; x<2; x++)
        {
            check[K]=x;
            f(K+1)
        }
    }
    
    
}
int main()
{
    for(int x=0; x<2; x++)
    {
        check[0]=x;
        f(1);
    }
}