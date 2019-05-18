// 문제 번호: 2240 문제 이름: 자두나무
// 문제 최초 시도: 2019_05_18
// 문제 풀이 완료: 2019_05_18
// 이 코드의 접근법: DP
/*
    D[t][w][1 or 2]의 의미:

    t초에 w만큼 움직이고 1 or 2에 위치에 있을 때까지 최대로 먹을 수 있는 자두의 개수

    주의해야할 점:
    자두가 자두를 먹기 위해서 시작하자마자 바로 움직일 수도 있다.

    솔직히 DP table을 채우는 과정에서 for문이 4중 for로 짜여져서 마음에 드는 코드는 아니다.
    => for문의 구성을 보면 어떻게 4*n^2으로도 볼 수 있...쿨럭...
*/

#include <bits/stdc++.h>
using namespace std;
int T,W;
int D[1100][33][3];
int ar[1100];
int main()
{
    cin>>T>>W; //T와 W 입력
    for(int t=0; t<T; t++)
    {
        cin>>ar[t]; //각 t마다 자두가 떨어지는 위치 입력
    }

    // DP table initialization
    if(W>0)
    {
        if(ar[0]==2) D[0][1][2]=1;
    }
    if(ar[0]==1) D[0][0][1]=1;

    //DP table 채우기
    for(int t=1; t<T; t++)
    {
        for(int w=0; w<=W; w++)
        {
            for(int z=1; z<3; z++)
            {
                for(int k=1; k<3; k++)
                {
                    if(k!=z && w+1<=W) // 다른 나무로 움직인 경우
                    {
                        D[t][w+1][z]=max(D[t][w+1][z],D[t-1][w][k]+ (ar[t]==z?1:0));
                    }
                    if(k==z) // 그 나무 그대로 위치하는 경우
                    {
                        D[t][w][z]=max(D[t][w][z],D[t-1][w][z]+(ar[t]==z?1:0));
                    }
                }
            }
        }
    }
    //결과값 도출
    int Max=0;
    for(int w=0; w<=W; w++)
    {
        for(int z=1; z<3; z++)
        {
            Max=max(Max,D[T-1][w][z]);
        }
    }
    cout<<Max;
}