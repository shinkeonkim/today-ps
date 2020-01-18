#include <iostream>

using namespace std;
int N,P,E;
int X[22];
int Y[22];
int check[22];
int answer[22];
bool isAnswer = false;

void result() {
    if(isAnswer) return;
    int cnt = 0,Sx = 0,Sy = 0;
    for(int x = 0; x<N; x++) {
        if(check[x] == 1) {
            cnt++;
            Sx +=X[x];
            Sy +=Y[x];
        }
    }
    if(cnt != P) return;

    if(Sx <= E && E <=Sy) {
        isAnswer = true;
        // for(int x = 0; x<N; x++) {
        //     cout << check[x] << " ";
        // }

        int left = E;
        for(int x = 0; x<N; x++) {
            if(check[x] == 1) {
                answer[x] +=X[x];
                left-=X[x];
            }
        }

        for(int x = 0; x<N; x++) {
            if(check[x] == 1 && left>0) {
                int K = min(left,Y[x]-answer[x]);
                answer[x] += K;
                left -= K;
            }
        }

        for(int x = 0; x<N; x++) {
            cout << answer[x] << " ";
        }
    }

}

void DFS(int current) {
    if(current == N) {
        for(int t = 0; t<2; t++) {
            check[current] = t;
            result();
        }
        return ;
    }
    for(int t = 0; t<2; t++) {
        check[current] = t;
        DFS(current+1);
    }
}

int main() {
    cin >> N >> P >> E;
    for(int i = 0; i < N; i++) {
        cin >> X[i] >> Y[i];
    }

    DFS(0);

    if(!isAnswer) {
        cout<<-1;
    }
}