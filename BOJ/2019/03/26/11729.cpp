// 문제 번호: 11729 문제 이름: 하노이 탑 이동순서
// 문제 최초 시도: 2019_03_26
// 문제 풀이 완료: 2019_03_26
// 이 코드의 접근법: 재귀함수
// N개를 옮기려 한다.
// => N-1개를 중간지점에 옮겨 놓고 1개를 최종 지점에 놓는다

#include <iostream>
using namespace std;
int N,Cnt=1;
void print(int X,int Y)
{
    cout<<X<<" "<<Y<<"\n";
}
void f(int n,int start,int by,int end)
{
    Cnt++;
    if(n==1)
    {
        print(start,end);
    }
    else
    {
        f(n-1,start,end,by);
        print(start,end);
        f(n-1,by,start,end);
    }
    
}
int main()
{
    cin>>N;
    cout<< (Cnt<<N)-1 <<"\n";
    f(N,1,2,3);
}