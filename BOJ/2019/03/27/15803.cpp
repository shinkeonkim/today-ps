//문제 번호:15803 문제 이름: PLAYERJINAH’S BOTTLEGROUNDS
// 문제 최초 시도: 2019_03_27
// 문제 풀이 완료: 2019_03_27
// 이 코드의 접근법: CCW

#include <iostream>
using namespace std;
long long x1,x2,x3,y1,y2,y3;
int main()
{
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if((x1*y2+x2*y3+x3*y1)-(y1*x2+y2*x3+y3*x1)==0) cout<<"WHERE IS MY CHICKEN?";
    else cout<<"WINNER WINNER CHICKEN DINNER!";
}
