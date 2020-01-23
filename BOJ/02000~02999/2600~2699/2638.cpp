#include <iostream>

using namespace std;

int N,M,ar[220][220],ans,cnt;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,-1,1};

void f(int y,int x) {
	if(ar[y][x]==0) {
        ar[y][x]=2;
        for(int d = 0; d<4; d++) {
            int next_y = y+dy[d];
            int next_x = x+dx[d];
            if(next_y<0 || next_x <0 || next_y >=N || next_x >= M) continue;
            if(ar[next_y][next_x] != 0) continue;
            f(next_y,next_x);
        }
	}
}
int main() {
	cin >> N >> M;
	for(int y=0; y<N; y++) {
		for(int x=0; x<M; x++) {
			cin >> ar[y][x];
			if(ar[y][x]==1) cnt++;
		}
	}

	while(cnt>0) {
		ans++;
		f(0,0);
		
		for(int y=1; y<N-1; y++)
			for(int x=1; x<M-1; x++) {
				if(ar[y][x] == 1) {
					int k = 0;
					if(ar[y+1][x] == 2) k++;
					if(ar[y-1][x] == 2) k++;
					if(ar[y][x+1] == 2) k++;
					if(ar[y][x-1] == 2) k++;

					if(k>=2) {
						ar[y][x] = 0;
						cnt--;
					}

				}
			} 
		for(int y=0; y<N; y++)
			for(int x=0; x<M; x++) 
				if(ar[y][x] == 2) ar[y][x] = 0;
	}
	cout << ans;
}