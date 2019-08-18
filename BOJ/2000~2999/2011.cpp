#include <iostream>
#include <string>
#define Mod 1000000
using namespace std;
string a;
int N,A[5500],D[5500][2];
int main()
{
	cin>>a;
	for(int x=0; x<a.length(); x++)
	{
		A[x]=a[x]-48;
	}
	N=a.length();

	if(A[0]!=0)D[0][0]=1;
	else D[0][0]=0;
	
    D[0][1]=0;
	
    if(A[1]!=0) D[1][0]=D[0][0];
	else D[1][0]=0;
	
    if(A[0]*10+A[1]<=26&&A[0]!=0)D[1][1]=1;
	else D[1][1]=0;
	
	for(int x=2; x<N; x++)
	{
		if(A[x]!=0) D[x][0]=(D[x-1][0]+D[x-1][1])%Mod;
		else D[x][0]=0;
		if(A[x-1]*10+A[x]<=26&&A[x-1]!=0) D[x][1]=(D[x-2][0]+D[x-2][1])%Mod;
		else D[x][1]=0;
	}
	cout<<(D[N-1][0]+D[N-1][1])%Mod;
}