#include <iostream>
using namespace std;
long long N,S,a;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cout.tie();
    cin>>N;
    for(int x=0; x<N; x++)
    {
        cin>>a;
        S+=a;
    }
    cout<< abs(S - N*(N-1)/2);
}