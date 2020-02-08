#include <iostream>
using namespace std;
int N,M,K;
int cost[11000];
int a,b;
int set[11000];
int m[11000];

int find(int x) {
    if(set[set[x]] == set[x]) {
        return set[x];
    }
    else {
        return set[x] = find(set[x]);
    }
}

void u(int a,int b) {
    int A = find(a);
    int B = find(b);
    if(A != B) {
        if(A<B) set[B] = A;
        else set[A] = B;
    }
}

int main() {
    cin >> N >> M >> K;
    for(int x= 1; x<=N; x++) {
        cin >> cost[x];
        set[x] = x;
        m[x] = 99999;
    }
    for(int x = 0; x <M; x++) {
        cin >> a >> b;
        u(a,b);
    }
    for(int x=1; x<=N; x++) {
        set[x] = find(x);
        if(m[set[x]] > cost[x]) {
            m[set[x]] = cost[x];
        }
    }
    int C = 0;
    for(int x=1; x<=N; x++) {
        if(m[x] != 99999) {
            C += m[x];
        }
    }
    if(C <= K) {
        cout << C;
    }
    else {
        cout << "Oh no";
    }


}