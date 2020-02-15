#include <iostream>
using namespace std;
long long N,K,M;
long long n1,n2,n3,ar1[1100],ar2[1100],ar3[1100],ret=1;
long long MEMO[2200][2200];
int f(int x,int y)
{
	if(MEMO[x][y]) return MEMO[x][y];
	else if(y==0||x==y) return MEMO[x][y]=1;
	else return MEMO[x][y]=(f(x-1,y-1)+f(x-1,y))%M;
}
int main()
{
	scanf("%lld %lld %lld",&N,&K,&M);
	
	while(N>0)
	{
		ar1[n1]=N%M;
		n1++;
		N/=M;
	}
	while(K>0)
	{
		ar2[n2]=K%M;
		n2++;
		K/=M;
	}
	
	if(n1>n2) n3=n1;
	else n3=n2;
	
	for(int x=0; x<n3; x++)
	{
		if(ar1[x]<ar2[x]) ar3[x]=0;
		else
		{
			ar3[x]=f(ar1[x],ar2[x]);
		}
	}
	
	for(int x=0; x<n3; x++)
	{
		ret*=(ar3[x]);
	}
	printf("%lld",ret%M);
}
