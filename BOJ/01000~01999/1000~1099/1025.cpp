#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()

using namespace std;

int N, M;
char ar[33][33];
int answer = -1;

void g(int a) {
    int b = (int)sqrt(a);

    for1(b-2,b+3) {
        if(i*i == a) {
            if(answer < a) {
                answer = a;
                break;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    for1(0,N) {
        for1j(0,M) {
            cin >> ar[i][j];
        }
    }

    for1(0,N) {
        for1j(0,M) {
            for(int w1 = -M; w1 <= M; w1++) {
                for(int w2 = -N; w2 <= N; w2++) {
                    if(w1 == 0 && w2 == 0) continue;

                    int num = 0;
                    int Y = i;
                    int X = j;
                    while(true) {
                        g(num*10 + (ar[Y][X]- 48));
                        int nextX = w1 + X;
                        int nextY = w2 + Y;
                        if(nextX < 0 || nextY < 0 || nextX >= M || nextY >= N) {
                            break;
                        } 
                        num = num*10 + (ar[Y][X]-48);
                        Y = nextY;
                        X = nextX;
                    }
                }
            } 
        }
    }

    cout << answer;
}