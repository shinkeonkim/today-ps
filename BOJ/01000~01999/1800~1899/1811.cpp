#include <bits/stdc++.h>

using namespace std;

int N,M,I,ans=99999999,ans_h;
int ar[550][550];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M >> I;
    
    for(int y = 0; y < N; y++) {
        for(int x = 0; x < M; x++) {
            cin >> ar[y][x];
        }
    }

    for(int height = 0; height < 257; height++) {
        int bigger = 0;
        int smaller = 0;
        for(int y = 0; y < N; y++) {
            for(int x = 0; x < M; x++) {
                if(height > ar[y][x]) {
                    smaller += height - ar[y][x];
                }
                else {
                    bigger += ar[y][x] - height;
                }
            }
        }
        int time = bigger * 2 + smaller;
        if(I + bigger >= smaller && ans >= time ) {
            ans = time;
            ans_h = height;
        }
    }
    cout << ans << " " << ans_h;
}