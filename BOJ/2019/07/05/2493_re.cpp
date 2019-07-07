#include <iostream>
#include <stack>
#include <utility>
using namespace std;
int n,ar[510000],check[510000];
stack <pair<int,int>> stk;
int main()
{
	cin>>n;
	for(int x=1; x<=n; x++)cin>>ar[x];
	for(int x=n; x>0; x--)
	{
		if(stk.empty())
		{
			stk.push({ar[x],x});
		}
		else
		{
			while(!stk.empty()&&stk.top().first<ar[x])
			{
				check[stk.top().second]=x;
				stk.pop();
			}
			stk.push({ar[x],x});
		}
	}
	for(int x=1; x<=n; x++)cout<<check[x]<<" ";
}