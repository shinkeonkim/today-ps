#include <iostream>
#define Mod 1234567
using namespace std;
int T,a;
int ar[1100][11];
int main()
{
    for(int x=0; x<10; x++) ar[1][x]=1;
    for(int y=2; y<=1000; y++)
    {
        ar[y][1]=(ar[y-1][2]+ar[y-1][4])%Mod;
        ar[y][2]=(ar[y-1][1]+ar[y-1][3]+ar[y-1][5])%Mod;
        ar[y][3]=(ar[y-1][2]+ar[y-1][6])%Mod;
        ar[y][4]=(ar[y-1][1]+ar[y-1][5]+ar[y-1][7])%Mod;
        ar[y][5]=(ar[y-1][2]+ar[y-1][4]+ar[y-1][6]+ar[y-1][8])%Mod;
        ar[y][6]=(ar[y-1][3]+ar[y-1][5]+ar[y-1][9])%Mod;
        ar[y][7]=(ar[y-1][4]+ar[y-1][8]+ar[y-1][0])%Mod;
        ar[y][8]=(ar[y-1][5]+ar[y-1][7]+ar[y-1][9])%Mod;
        ar[y][9]=(ar[y-1][6]+ar[y-1][8])%Mod;
        ar[y][0]=(ar[y-1][7])%Mod;
    }


    cin>>T;
    for(int x=0; x<T; x++)
    {
        cin>>a;
        long long k = 0;
        for(int y=0; y<10; y++) 
        {
            k =(k+ar[a][y]) % Mod;
        }
        cout<<k<<endl;
    }

}