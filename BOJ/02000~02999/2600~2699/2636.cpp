#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N,M,ar[110][110],tn,cnt,cnt2;
ll dx[] = {0,0,1,-1};
ll dy[] = {1,-1,0,0};

void f(int y,int x) {
	if(ar[y][x]==0)
	{
		ar[y][x]=3;
        for(int d =0; d < 4; d++) {
            int nextY = y + dy[d];
            int nextX = x + dx[d];

            if(nextX < 0 || nextX >=M || nextY < 0 || nextY >=N) {
                continue;
            }

           f(nextY,nextX);
        }
	}
	else if(ar[y][x]==1)
	{
		ar[y][x]=2;
		cnt--;
	}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	cin>>N>>M;
	for(int y=0; y<N; y++) {
		for(int x=0; x<M; x++) {
			cin >> ar[y][x];
			if(ar[y][x]==1) cnt++;
		}
	}

	while(cnt>0) {
		cnt2=cnt;
		tn++;
		f(0,0);
		
		for(int y=0; y<N; y++)
			for(int x=0; x<M; x++)
			{
				if(ar[y][x]==2||ar[y][x]==3) ar[y][x]=0;
			} 
	}
	cout<< tn << "\n" << cnt2;
}