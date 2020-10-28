#include <iostream>
using namespace std;
int check[11];
int N,K,known[11];
int answer,ss;

void g() {
    int a = 0;
    for(int x=0; x<N; x++) {
        a |= (1<<check[x]);
    }
    if(a&ss) {
        for(int x=0;x<N; x++) {
            cout<<check[x]<<" ";
        }
        cout<<"\n";
        answer++;
    }
}

void dfs(int current) {
    if(current == N-1) {
        for(int x=0;x<10; x++) {
            check[current]= x;
            g();
        }
    }
    else {
        for(int x=0; x<10; x++) {
            check[current]=x;
            dfs(current+1);
        }
    }
}
int main() {
    cin >> N >> K;
    for(int x = 0; x<K; x++) {
        cin >> known[x];
        ss |= (1 << known[x]);
    }
    cout<<ss;
    dfs(0);
    cout <<answer;
}