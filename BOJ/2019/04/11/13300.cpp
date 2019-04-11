// 문제 번호: 13300 문제 이름: 방 배정
// 문제 최초 시도: 2019_04_11
// 문제 풀이 완료: 2019_04_11
// 이 코드의 접근법: 구현

#include <iostream>
using namespace std;
int N,K,Sum,ar[3][8];
int main()
{
	cin>>N>>K;
	for(int x=0; x<N; x++)
	{
		int a,b;
		cin>>a>>b;
		ar[a][b]++;
	}
	for(int x=0; x<2; x++)
	{
		for(int y=1; y<7; y++)
		{
			Sum+=ar[x][y]/K;
			if(ar[x][y]%K>0)Sum++;
		}
	}
	cout<<Sum;
}