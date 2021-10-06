#include <iostream>
using namespace std;
int A,B;
char a[]="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void f(int x)
{
	if(x>0)
	{
		f(x/B);
		cout<<a[x%B];
	}
	else {
    return;
  }
}
int main()
{
	cin>>A>>B;
	if(A==0) cout<<0;
	else f(A);
}