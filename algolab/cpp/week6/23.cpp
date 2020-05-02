#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll tc,m,n,ans,cnt;
bool check[110][110];
string ar[110];
int dy[] = {0,0,1,-1};
int dx[] = {1,-1,0,0};
ullv1 ret;

void init() { // m = row, n = col
    cin >> n >> m;
    ans = 0; // 방의 개수
    cnt = 0; // 방의 넓이  
    ret.clear(); // 방의 넓이 담아 두는 벡터
    for(int x=0; x<m; x++) cin >> ar[x];
    for(int y=0; y<m; y++) {
        for(int x=0; x<n; x++) {
            check[y][x] = true; // 이 지점을 방문할 수 있는가? -> 이 지점을 이전에 방문한 적 있는가?를 반대로,
        }
    }
}

void dfs(int Y,int X) {
    cnt++;
    check[Y][X] = false;
    for(int d = 0; d<4; d++) {
        int next_Y = Y + dy[d];
        int next_X = X + dx[d];
        if(0 >next_Y || 0>next_X || next_Y >= m || next_X >=n) continue;
        if(ar[next_Y][next_X] == '.' && check[next_Y][next_X]) dfs(next_Y,next_X);
    }
}

void solve() {
    for(int y=0; y<m; y++) {
        for(int x=0; x<n; x++) {
            if(ar[y][x] == '.' && check[y][x]) {
                cnt = 0;
                ans++;
                dfs(y,x);
                ret.push_back(cnt);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> tc;
    while(tc--) {
        init();
        solve(); 
        cout << ans << "\n";
        sort(ret.begin(),ret.end(),greater<ull> ());
        for(auto i : ret) {
            cout << i << " ";
        }
        cout<<"\n";
    }
}