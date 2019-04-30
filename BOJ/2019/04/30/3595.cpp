// 문제 번호: 3595 문제 이름: 맥주 냉장고
// 문제 최초 시도: 2019_04_30
// 문제 풀이 완료: 2019_04_30
// 이 코드의 접근법: A라는 수를 3개의 수의 곱으로 나타내면 이 3개의 수는 A의 약수이다.

#include <iostream>
#include <vector>
using namespace std;
int A,Min=987654321,Mina,Minb,Minc,a,b,c;
vector <int> V;
int main()
{
    cin>>A;
    for(int x=1; x<=A; x++)
    {
        if(A%x==0) V.push_back(x);
    }
    for(auto iter1=V.begin(); iter1!=V.end(); ++iter1)
    {
        for(auto iter2=V.begin(); iter2!=V.end(); ++iter2)
        {
            for(auto iter3=V.begin(); iter3!=V.end(); ++iter3)
            {
                a = *iter1;
                b = *iter2;
                c = *iter3;
                if(A == a*b*c && Min > 2*(a*b+b*c+c*a))
                {
                    Min = 2*(a*b+b*c+c*a);
                    Mina=a;
                    Minb=b;
                    Minc=c;
                }
            }
        }
    }
    cout<<Mina<<" "<<Minb<<" "<<Minc;
}