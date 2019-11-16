#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

struct node {
    ll num;
    ll X,Y,Z;
};

struct edge {
    ll dis;
    ll node1,node2;
};

edge E[440000];
node ar[110000];
ll N,edgeCnt,answer;
int set[110000];

bool compare1(node a, node b) {
    if(a.X < b.X) return true;
    return false;
}
bool compare2(node a, node b) {
    if(a.Y < b.Y) return true;
    return false;
}
bool compare3(node a, node b) {
    if(a.Z < b.Z) return true;
    return false;
}

bool edgeCompare(edge a,edge b) {
    if(a.dis < b.dis) return true;
    return false;
}

ll f(node a, node b) {
    return min(abs(a.X-b.X),min(abs(a.Y-b.Y),abs(a.Z-b.Z)));
}

int find(int k) {
    //cout << a << endl;
    //cout << set[k] << endl;
    if(set[set[k]] == set[k]) {
        return set[k];
    }
    return set[k] = find(set[k]);
}

void merge(int a,int b) {
    int A = find(a);
    int B = find(b);
    //cout << A << B << endl;
    if(A<B) {
        set[B] = A;
    }
    else {
        set[A] = B;
    }
}

int main() {
    cin >> N;
    for(int x = 0; x< N; x++) {
        cin >> ar[x].X >> ar[x].Y >> ar[x].Z;
        ar[x].num = x+1;
        set[ar[x].num] = x+1;
    }

    sort(ar,ar+N,compare1);
    for(int x = 1; x<N; x++) {
        edge Z;
        Z.dis = f(ar[x-1],ar[x]);
        Z.node1 = ar[x-1].num;
        Z.node2 = ar[x].num;
        E[edgeCnt] = Z;
        edgeCnt++;
    }
    sort(ar,ar+N,compare2);
    for(int x = 1; x<N; x++) {
        edge Z;
        Z.dis = f(ar[x-1],ar[x]);
        Z.node1 = ar[x-1].num;
        Z.node2 = ar[x].num;
        E[edgeCnt] = Z;
        edgeCnt++;
    }
    sort(ar,ar+N,compare3);
    for(int x = 1; x<N; x++) {
        edge Z;
        Z.dis = f(ar[x-1],ar[x]);
        Z.node1 = ar[x-1].num;
        Z.node2 = ar[x].num;
        E[edgeCnt] = Z;
        edgeCnt++;
    }

    sort(E,E+edgeCnt,edgeCompare);
    
    for(int x = 0; x<edgeCnt; x++) {
        //cout << E[x].dis << E[x].node1 << E[x].node2 << endl;
        if(find(E[x].node1) != find(E[x].node2)) {
            answer += E[x].dis;
            merge(E[x].node1,E[x].node2);
        }
    }
    cout << answer;
}