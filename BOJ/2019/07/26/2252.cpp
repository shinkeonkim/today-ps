#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct st{
    int A,B;
};

struct cmp {
    bool operator()(st a, st b){
        return a.B > b.B;
    }
};

int N,M,a,b;
vector < vector <int> > V(33000);
int cnt[33000];
int check[33000];
priority_queue<st , vector<st>, cmp> Q;
int main()
{
    cin>>N>>M;
    for(int x=0; x<M; x++)
    {
        cin>>a>>b;
        V[a].push_back(b);
        cnt[b]++;
    }
    for(int x=1; x<=N; x++)
    {
        Q.push({x,cnt[x]});
    }
    
    while(!Q.empty())
    {
        st Z = Q.top();
        Q.pop();
        if(check[Z.A] == 1) continue;

        if(cnt[Z.A] != 0) continue;
        
        cout<<Z.A<<" "; 
        check[Z.A] = 1;

        for(int x=0; x<V[Z.A].size(); x++)
        {
            cnt[V[Z.A][x]]--;
            if(check[V[Z.A][x]] == 0)
            {
                Q.push({V[Z.A][x],cnt[V[Z.A][x]]});
            }
        }
    }
}