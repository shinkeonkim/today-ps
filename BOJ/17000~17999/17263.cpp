#include <iostream>
#include <algorithm>
using namespace std;
int N;
int ar[550000];
int main()
{
    cin>>N;
    for(int x=0; x<N; x++) cin>>ar[x];
    sort(ar,ar+N);
    cout<<ar[N-1];
}