#include <bits/stdc++.h>

using namespace std;

vector<int> V;
int N,K;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> K;
    for(int x=1; x<=N; x++) V.push_back(x);

    int current = K-1;
    cout <<"<";
    for(int x = 0; x<N; x++) {
        cout << V[current];
        if(x!=N-1) cout <<", ";
        if(x!=N-1) V.erase(V.begin()+current);
        current+=K-1;
        current%=V.size();
    }
    cout << ">";
    
}