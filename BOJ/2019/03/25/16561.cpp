// 문제 번호: 16561 문제 이름: 3의 배수
// 문제 최초 시도: 2019_03_25
// 문제 풀이 완료: 2019_03_25
// 이 코드의 접근법: 조합
// N/3개의 1이 일자로 쭉 있을 때, 어떤 두 개의 막대로 1들을 3그룹으로 나누는
// 경우의 수를 구하는 문제로 전환시킬 수 있고
// f(n,r)이 nCr을 구하는 함수일 때, f(N/3-1,2)이 답이다. 

#include <iostream>
using namespace std;
unsigned long long N;
unsigned long long D[1100][1100];
unsigned long long f(unsigned long long a,unsigned long long b) // nCr 함수
{
    if(D[a][b]) return D[a][b];
    else if(a<b) return D[a][b]=0;
    else if(b==1) return D[a][b]=a;
    else if(a==b) return D[a][b]=1;
    else return D[a][b]=f(a-1,b-1)+f(a-1,b);
}
int main()
{
    cin>>N;cout<<f(N/3-1,2); //답 출력
}