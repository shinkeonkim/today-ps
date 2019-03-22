// 문제 번호: 2804 문제 이름: 크로스워드 만들기
// 문제 최초 시도: 2019_03_22
// 문제 풀이 완료: 2019_03_22
// 최초 접근법 : 문자열, 구현

#include <iostream>
#include <string>
using namespace std;
string a,b;
char ar[44][44];
void f(int X,int Y)
{
    for(int y=0; y<b.length(); y++)
    {
        for(int x=0; x<a.length(); x++)
        {
            ar[y][x]='.';
        }
    }
    for(int y=0; y<b.length(); y++) ar[y][X]=b[y];
    for(int x=0; x<a.length(); x++) ar[Y][x]=a[x];
    for(int y=0; y<b.length(); y++)
    {
        for(int x=0; x<a.length(); x++) cout<<ar[y][x];
        cout<<endl;
    }
}
int main()
{
    cin>>a>>b;
    for(int x=0; x<a.length(); x++)
    {
        for(int y=0; y<b.length(); y++)
        {
            if(a[x]==b[y])
            {
                f(x,y);
                return 0;
            }
        }
    }
}