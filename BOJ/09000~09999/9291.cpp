// 문제 번호: 9291 문제 이름: 스도쿠 채점
// 문제 최초 시도: 2019_05_17
// 문제 풀이 완료: 2019_05_17
// 이 코드의 접근법: 구현

#include <iostream>
using namespace std;
int T;
int ar[10][10];

bool g()
{
    //세로
    for(int x=0; x<9; x++)
    {
        int K=0;
        for(int y=0; y<9; y++)
        {
            K = K | (1<<ar[y][x]);
        }
        if(K!=1022) return false;
    }
    //가로
    for(int y=0; y<9; y++)
    {
        int K=0;
        for(int x=0; x<9; x++)
        {
            K = K | (1<<ar[y][x]);
        }
        if(K!=1022) return false;
    }
    //9칸    
    for(int y=0; y<9; y+=3)
    {
        for(int x=0; x<9; x+=3)
        {
            int K=0;
            for(int Y=0; Y<3; Y++)
            {
                for(int X=0; X<3; X++)
                {   
                    K = K | (1<<ar[Y+y][X+x]);
                }
            }
            if(K!=1022) return false;
        }
    }
    return true;
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
        cout<<"Case "<<t+1<<": "; 
        if(g())
        {
            cout<<"CORRECT";
        }
        else cout<<"INCORRECT";
        cout<<"\n";
    }
    

}