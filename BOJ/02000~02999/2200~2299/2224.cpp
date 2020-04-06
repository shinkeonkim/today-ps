#include <iostream>
#define INF 123456789
using namespace std;
int N,A,B,ans=0;
int D[110][110];
char a,dump,b;


int f(char k) {
    if(65 <= k && k <=90) return k -65;
    if(97 <= k && k <=122) return k-71;
}

char f_inverse(int k) {
    if(0<=k && k <=25) return (char)(k+65);
    return (char)(k+71);
}

int main() {
    cin >> N;
    for(int x=0; x<52; x++) {
        for(int y=0; y<52; y++) D[x][y] = INF;
    }
    for(int x=0; x<N; x++) {
        cin >> a >> dump >> dump >> b;
        A = f(a);
        B = f(b);
        D[A][B] = 1;
    }   
    for(int z=0; z<52; z++) {
        for(int x=0; x<52; x++) {
            for(int y=0;y<52; y++) {
                if(D[x][y] > D[x][z] + D[z][y]) D[x][y] = D[x][z] + D[z][y];
            }
        }
    }
    for(int x=0; x<52; x++) {
        for(int y=0; y<52; y++) {
            if(D[x][y] != INF && x!= y) {
                ans++;
            }
        }
    }
    cout<<ans<<"\n";
    for(int x=0; x<52; x++) {
        for(int y=0; y<52; y++) {
            if(D[x][y] != INF && x!=y) {
                cout << f_inverse(x) << " => " << f_inverse(y) << "\n";
            }
        }
    }
}