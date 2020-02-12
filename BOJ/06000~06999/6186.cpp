#include <iostream>
#include <string>
using namespace std;
int N,M,cnt;
string ar[110];

int main() {
    cin >> N >> M;
    for(int y=0;y<N; y++) cin >>ar[y];
    for(int y=0;y<N; y++) {
        for(int x=0; x<M;x++) {
            if(ar[y][x]=='#') {
                cnt+=1;
                ar[y][x] = '.';
                if(y+1<N && ar[y+1][x] == '#') {
                    ar[y+1][x]='.';
                }
                if(x+1<M && ar[y][x+1] == '#') {
                    ar[y][x+1]='.';
                }

            }
        }
    }
    cout<<cnt;
}