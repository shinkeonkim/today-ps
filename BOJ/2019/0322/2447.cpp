// 문제 번호: 2447 문제 이름: 별 찍기-10
// 문제 최초 시도: 2019_03_22
// 문제 풀이 완료: 2019_03_22
// 이 코드의 접근법: 재귀함수로 9*9판을 나누어 접근

#include <iostream>
using namespace std;
int ar[4400][4400]; // 재귀 호출을 하면서 데이터를 저장
int N; //입력 받을 수

void f(int sy,int sx,int ey, int ex, int n)
{
    if(n==3) //최소 단위를 3으로 잡고 최소단위일때, 중간을 제외한 8칸을 별로 채움.
    {
        for(int Y=sy; Y<=ey; Y++)
        {
            for(int X=sx; X<=ex; X++)
            {
                if(Y==sy+1&&X==sx+1);
                else ar[Y][X]=1;
            }
        }
    }
    else //3보다 클경우 9개로 분할해 재귀 호출함.
    {
        for(int Y=sy; Y<ey; Y+=n/3)
        {
            for(int X=sx; X<ex; X+=n/3)
            {
                if(Y==sy+n/3 && X==sx+n/3);
                else
                {
                    f(Y,X,Y+n/3-1,X+n/3-1,n/3);
                }
            }
        }
    }
    
}

int main()
{
    cin>>N;
    if(N==1) //N==1인 경우 배제
    {
        cout<<"*";
        return 0;
    }

    f(0,0,N-1,N-1,N); //재귀 호출
    for(int y=0; y<N; y++) //출력
    {
        for(int x=0; x<N; x++)
        {
            if(ar[y][x]==1) cout<<"*";
            else cout<<" ";
        }cout<<endl;
    }
}