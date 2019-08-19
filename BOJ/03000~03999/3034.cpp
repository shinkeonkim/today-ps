// 문제 번호: 3034 문제 이름: 앵그리 창영
// 문제 최초 시도: 2019_03_20
// 문제 풀이 완료: 2019_03_20
// 최초 접근법 : 피타고라스의 법칙 (수학)

#include <iostream>
using namespace std;
int N,R,W,ar[55];
int main()
{
    cin>>N>>R>>W;
    for(int x=0; x<N; x++) cin>>ar[x];
    for(int x=0; x<N; x++)
    {
        if(ar[x]*ar[x]<=R*R+W*W) cout<<"DA\n";
        else cout<<"NE\n";
    }
}