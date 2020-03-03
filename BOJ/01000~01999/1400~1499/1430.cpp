#include <iostream>
#include <vector>
#define INF 123456789
using namespace std;

struct tower{
    int X,Y;
} ar[110];

int N,R,D,X,Y;
double answer;
int check[110];
int dis[110][110];

int d(tower a, tower b) {
    return (a.X - b.X) * (a.X - b.X) + (a.Y-b.Y) * (a.Y-b.Y);
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N >> R >> D >> X >> Y;
    R *= R;


    for(int x = 0; x<N; x++) {
        cin >> ar[x].X >> ar[x].Y;
    }
    for(int x=0;x<N; x++)
        for(int y=0;y<N; y++){
            dis[x][y] = INF;
        }

    
    for(int x=0; x<N; x++) {
        for(int y = x+1; y<N; y++) {
            if(d(ar[x],ar[y]) <= R) {
                dis[x][y] = 1;
                dis[y][x] = 1;
            }
        }
    }

    for(int x = 0; x<N; x++) {
        for(int y=0;y<N; y++) {
            for(int z =0;z<N;z++) {
                if(dis[y][z] > dis[y][x] + dis[x][z]) {
                    dis[y][z] = dis[y][x] + dis[x][z];
                }
            }
        }
    }

    for(int x = 0; x<N; x++) {
        if(d(ar[x],{X,Y}) > R) {
            int Min = INF;
            for(int y =0;y<N; y++) {
                if(x!=y) {
                    if(d(ar[y],{X,Y}) <= R && Min > dis[x][y]) {
                        Min = dis[x][y];
                    }
                }
            }
            if(Min != INF) {
                double Z = D;
                for(int y = 0; y<Min; y++) {
                    Z/=2;
                }
                answer += Z;
            }
        }
        else {
            answer += D;
        }
    }
    cout<<answer;
}