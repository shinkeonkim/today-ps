//문제 번호:5354 문제 이름: J박스
// 문제 최초 시도: 2019_03_28
// 문제 풀이 완료: 2019_03_28
// 이 코드의 접근법: 구현

#include <iostream>
using namespace std;
int T,A;
int main()
{
    cin>>T;
    for(int x=0; x<T; x++)
    {
        cin>>A;
        if(A==1||A==2)
        {
            for(int x=0; x<A; x++)
            {
                for(int y=0; y<A; y++)
                {
                    cout<<"#";
                }
                cout<<endl;
            }
            cout<<endl;
            continue;
        }

        for(int y=0; y<A; y++)
        {
            for(int x=0; x<A; x++)
            {
                if(x==0||y==0||x==A-1||y==A-1) cout<<"#";
                else cout<<"J";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}