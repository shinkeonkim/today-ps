#include <bits/stdc++.h>

using namespace std;

int T,M,N,K,a,b,ar[55][55],cnt;

int dy[4]={1,-1,0,0};
int dx[4]={0,0,1,-1};

void dfs(int y,int x) {
	ar[y][x]=0;

	for(int d=0; d<4; d++) {
		int ny = y + dy[d];
		int nx = x + dx[d];
		
    if(0 > ny || ny >= N || 0 > nx || nx >= M || ar[ny][nx] != 1) continue;		
    dfs(ny,nx);
	}
}

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	cin >> T;
	
  while(T--) {
		cnt=0;
		cin >> M >> N >> K;
	  for(int y=0; y<N; y++)
      for(int x=0; x<M; x++)
        ar[y][x]=0;
		
		for(int i = 0; i < K; i++) {
			cin >> a >> b;
			ar[b][a]=1;
		}

		for(int y=0; y<N; y++) {
			for(int x=0; x<M; x++) {
				if(ar[y][x] == 1) {
					cnt++;
					dfs(y,x);
				}
			}
		}

		cout << cnt << '\n';
	}
}