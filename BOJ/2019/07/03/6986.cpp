#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;
struct st{
    int a,b;
};

string a;
int N, K;
int Sa,Sb;
double A,B;
st ar[110000];

bool compare(st A,st B)
{
    if(A.a<B.a)
    {
        return true;
    }
    else if(A.a == B.a)
    {
        if(A.b < B.b)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    cin >> N >> K;
    for (int x = 0; x < N; x++)
    {
        cin>>a;
        bool c = true;
        for(int y=0; y<a.length(); y++)
        {
            if(a[y] == '.')
            {
                c=false;
            }
            if(c)
            {
                ar[x].a *= 10;
                ar[x].a += a[y]-'0';
            }
            else
            {
                ar[x].b *= 10;
                ar[x].b += a[y]-'0';
            }
            
        }
        Sa+=ar[x].a;
        Sb+=ar[x].b;
    }
    sort(ar,ar+N,compare);

    for(int x=0; x<K; x++)
    {
        Sa -= ar[x].a;
        Sa -= ar[N-x-1].a;

        Sb -= ar[x].b;
        Sb -= ar[N-x-1].b; 
    }
    A = Sa;
    A += (int) Sb/10;
    A += (double)(Sb%10)/10;

    Sa += K*(ar[K].a + ar[N-K-1].a);
    Sb += K*(ar[K].b + ar[N-K-1].b);

    B = Sa;
    B += (int) Sb/10;
    B += (double)(Sb%10)/10;
    printf("%.2lf\n%.2lf",A/(N-2*K),B/N);

}