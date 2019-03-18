// 문제 번호:10164 문제 이름: 격자상의 경로
// 문제 최초 시도: 2019_03_18
// 문제 풀이 완료: 2019_03_18
// 이 코드의 접근법: 조합(같은 것이 있는 순열)
// K==0 이라면, (N-1)+(M-1)개의 물건 중에서 N-1 또는 M-1 개의 물건을 중복없이 고르는 경우의 수와 같다.
// K!=0 이라면, 그 점을 나누기와 mod 연산을 통해 좌표를 알아내고 그 점을 기준으로 경우의 수를 나누어 구한다.

#include <iostream>
using namespace std;

int N,M,K,X,Y; //N은 표의 세로, M은 표의 가로, K는 문제에서 정의한 좌표
int D[20][20]; //nCr 함수의 메모이제이션 테이블
int C(int n,int r) //nCr 함수 정의
{
    if(n<0||r<0) return 0;
    else if(D[n][r]) return D[n][r];
    else if(n<r) return D[n][r]=0;
    else if(n==r) return D[n][r]=1;
    else if(r==1) return D[n][r]=n;
    else return D[n][r]=C(n-1,r)+C(n-1,r-1); 
}
int main()
{
    cin>>N>>M>>K; //input

    if(K==0) //k==0 인 경우 배제
    {
        cout<<C(N+M-2,N-1);
        return 0;
    }
    // 아래는 X,Y의 좌표를 구하고 nCr 함수에 넣기 위해 가공
    X=K%M;
    Y=K/M;
    if(K%M==0) 
    {
        Y--;
        X=M;
    }
    X--;
    // 2개의 경우의 수를 나눈 뒤, 곱의 법칙에 의해서 곱하고 출력
    cout<<C(X+Y,X)*C(N+M-(X+Y+2),(N-Y-1));
}