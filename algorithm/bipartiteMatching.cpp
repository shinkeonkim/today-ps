#include <iostream>
#include <vector>
#include <string>
#define Mx 2200
using namespace std;
int N,M,a,b,ans;
int d[Mx];
bool c[Mx];
vector <int> V[Mx];

string ar[1100];
int K;
string s;

bool dfs(int s_node)
{
    for(int x=0; x<V[s_node].size(); x++)
    {
        int e_node = V[s_node][x];
        if(c[e_node]) continue;
        c[e_node] = true;
        if(d[e_node] == 0 || dfs(d[e_node]))
        {
            d[e_node] = s_node;
            return true;
        }
    }
    return false;
}

int main()
{
    cin>>N>>M;
    
    for(int x= 0; x<M; x++) cin >> ar[x];
    
    for(int x=0; x<N; x++)
    {
        cin >> K;
        for(int y = 0; y < K; y++) {
            cin >> s;
            for(int z = 0; z < M; z++) {
                if(ar[z].compare(s) == 0) {
                    V[x+1].push_back(z+1);
                    break;
                }
            }
        }
    }

    for(int x=1; x<=N; x++)
    {
        fill(c,c+Mx,false);
        if(dfs(x)) ans++;
    }
    if(ans == N) 
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO\n" << ans;
    }
}