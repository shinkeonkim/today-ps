#include <iostream>
#include <algorithm>
using namespace std;

struct st{
    int a,b;
};

int N;
int current;
st ar[110];

bool compare(st a,st b)
{
    if(a.a<b.a)
    {
        return true;
    }
    return false;
}

int main()
{   
    cin>>N;
    for(int x=0; x<N; x++)
    {
        cin>>ar[x].a>>ar[x].b;
    }

    sort(ar,ar+N,compare);
    for(int x=0; x<N; x++)
    {
        if(current < ar[x].a)
        {
            current = ar[x].a;
        }
        current += ar[x].b;
    }
    cout<<current;
}