// 문제 번호: 11758 문제 이름: CCW
// 문제 최초 시도: 2019_05_07
// 문제 풀이 완료: 2019_05_07
// 이 코드의 접근법: CCW 알고리즘, 외적, 수학

#include <iostream>
using namespace std;
int x1,y1,x2,y2,x3,y3;
int ccw() 
{
	int a = x1 * y2 + x2 * y3 + x3 * y1;
	int b = y1 * x2 + y2 * x3 + y3 * x1;
	return a - b;
}

int main()
{
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(ccw()>0) cout<<1;
    else if(ccw()<0) cout<<-1;
    else cout<<0;
}