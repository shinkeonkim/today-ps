// 문제 번호: 16674 문제 이름: 2018년을 되돌아보며
// 문제 최초 시도: 2019_03_18
// 문제 풀이 완료: 2019_03_18
// 이 코드의 접근법: 단수 구현

#include <iostream>
using namespace std;
int N,check[15],C;
int main()
{
    cin>>N; //input
    while(N>0)
    {
        check[N%10]++;
        N/=10;
    }

    for(int x=0;x<10; x++)
    {
        if(x!=2&&x!=0&&x!=1&&x!=8)
        {
            if(check[x]>0)
            {
                C=1;
            }
        }
    }
    if(C==1) // 관련 없는 수
    {
        cout<<0;
        return 0;
    }
    
    if(check[0]>0&&check[1]>0&&check[2]>0&&check[8]>0) C=1;
    if(C==0) // 관련 있는 수이나 밀접한 수가 아님
    {
        cout<<1;
        return 0;
    }

    C=0;
    if(check[0]==check[1]&&check[1]==check[2]&&check[2]==check[8]) C=1;
    
    if(C==0) //밀접한 수이나 묶여있는 수가 아님
    {
        cout<<2;
        return 0;
    }
    cout<<8; //묶여 있는 수

}  