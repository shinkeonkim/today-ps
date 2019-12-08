#include <iostream>

using namespace std;
int N,M,V,input;
int C[1100000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M >> V;
    V--;
    for(int x = 0; x<N; x++) cin>> C[x];
    for(int x = 0; x<M; x++) {
        cin >> input;
        if(input <= V) cout<<C[input]<<"\n";
        else {
            input -=V;
            cout<<C[V + (input % (N-V))]<<"\n";
        }


    }
}