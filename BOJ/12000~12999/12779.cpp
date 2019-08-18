#include <iostream>
#include <cmath>
using namespace std;
long long a,b,k1,k2;
long long gcd(long long A,long long B)
{
    return B?gcd(B,A%B):A;
}
int main()
{
    cin>>a>>b;
    k1=int(sqrt(b))-int(sqrt(a));
    k2=b-a;
    if(k1==0) cout<<0;
    else cout<<k1/gcd(k1,k2)<<"/"<<k2/gcd(k1,k2);
}