// 문제 번호: 5666 문제 이름: 핫도그 
// 문제 최초 시도: 2019_04_05
// 문제 풀이 완료: 2019_04_05
// 이 코드의 접근법: 구현

#include <cstdio>
using namespace std;
double A,B;
int main()
{
    while(scanf("%lf %lf",&A,&B)!=EOF)
    {
        printf("%.2lf\n",A/B);
    }
}