#include <iostream>
#include <queue>
#include <vector>
#define Mx 9999999
#define NODE 22000
using namespace std;

struct st{
	int Node,Cost;
    
};

bool operator<(st A,st B) {
        return A.Cost > B.Cost;
}

int N,M,start,check[NODE],Min[NODE];
priority_queue<st,vector<st>> Q;
vector< vector<st> > E(NODE);
st ct;

int main()
{	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>N>>M>>start;
	for(int x=0; x<M; x++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		E[a].push_back({b,c});
		// E[b].push_back({a,c});
	}
	
	for(int x=1; x<=N; x++) Min[x]=Mx;
	
	Min[start]=check[start]=0;
	Q.push({start,0});
	
	while(!Q.empty())
	{
		ct=Q.top();
		check[ct.Node]=1;
		for(int x=0; x<E[ct.Node].size(); x++) {
			if(Min[E[ct.Node][x].Node]>Min[ct.Node]+E[ct.Node][x].Cost) {
				Min[E[ct.Node][x].Node]=Min[ct.Node]+E[ct.Node][x].Cost;
				Q.push({E[ct.Node][x].Node, Min[ct.Node]+E[ct.Node][x].Cost});
			}
		}
		Q.pop();
	}
	
	for(int x=1; x<=N; x++)
	{
		if(Min[x]!=Mx) cout<<Min[x]<<"\n";
		else cout<<"INF\n";
	}
}