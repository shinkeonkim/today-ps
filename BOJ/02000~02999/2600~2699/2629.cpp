#include <iostream>
#include <vector>
using namespace std;

int N,M;
int w[33];
int marbel[11];
int D[220000];
int main() {
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> w[i];
    }
    cin >> M;
    for(int i = 0; i < M; i++) {
        cin >> marbel[i];
    }

    D[40000] = 1;
    for(int i = 0; i<N; i++) {
        vector <int> V;
        for(int j = 0; j<=80000; j++) {
            if(D[j] == 1) {
                if(j+w[i] <= 80000 && D[w[i]+j] == 0) {
                    D[w[i]+j] = 2;
                    V.push_back(w[i]+j);
                }
                if(j-w[i] >= 0 && D[j-w[i]] == 0) {
                    D[j-w[i]] = 2;
                    V.push_back(j-w[i]);
                }
            }
        }
        while(!V.empty()) {
            // cout << V.back()-40000 <<" ";
            D[V.back()] = 1;
            V.pop_back();
        }
    }

    for(int i = 0; i < M; i++) {
        if(D[marbel[i]+40000] == 1) {
            cout << "Y ";
        }
        else {
            cout << "N ";
        }
    }
}