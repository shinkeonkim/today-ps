#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long

using namespace std;
struct A {
    ll X, K; //K = kind
};
struct B {
    ll X, B; // K bitmasking
};

ll N,M,input,Min=99987654321,cnt=0;
ll C1,C2;
A ar[1100000];
vector <B> V;

bool compare1(A a, A b) {
    if(a.X < b.X) return true;
    if(a.X == b.X) {
        if(a.K < b.K) return true;
    }
    return false;
}

ll f(ll k) {
    if(k>0) return k;
    return -k;
}

int main() {
    cin >> N >> M;
    cin >> C1 >> C2;
    for(int x=0; x<N; x++) {
        cin>>input;
        ar[x].X = input;
        ar[x].K = 1;
    }
    for(int x=0; x<M; x++) {
        cin >>input;
        ar[x+N].X = input;
        ar[x+N].K = 2; 
    }

    sort(ar,ar+N+M,compare1);
    for(int x=0; x<N+M; x++) {
        if(x+1 <N+M) {
            if(ar[x+1].X == ar[x].X) {
                V.push_back({ar[x].X,ar[x].K|ar[x+1].K});
                x++;
            } else {
                V.push_back({ar[x].X,ar[x].K});
            }
        }
        else {
            V.push_back({ar[x].X,ar[x].K});
        }
    }

    for(int x=1; x<V.size(); x++) {
        if(V[x-1].B &1 && V[x].B &2) {
            if(V[x].X - V[x-1].X < Min) {
                Min = V[x].X - V[x-1].X;
                cnt=1;
            }
            else if(V[x].X - V[x-1].X == Min) {
                cnt++;
            }
        }
        if(V[x-1].B &2 && V[x].B &1) {
            if(V[x].X - V[x-1].X < Min) {
                Min = V[x].X - V[x-1].X;
                cnt=1;
            }
            else if(V[x].X - V[x-1].X == Min) {
                cnt++;
            }
        }
    }
    int zero_cnt=0;
    for(int x=0; x<V.size(); x++) {
        if(V[x].B == 3) {
            Min = 0;
            zero_cnt++;
        }
    }

    if(zero_cnt > 0) {
        cout<<f(C1-C2)<<" "<<zero_cnt;
    }
    else {
        cout<<f(C1-C2)+Min << " "<< cnt;
    }
}