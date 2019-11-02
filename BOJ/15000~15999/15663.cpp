#include <iostream>
using namespace std;
int M,N,cnt;
int input[10];
int ar[10][2];
int main() {
    cin >> M >> N;
    for(int x = 0; x < N; x++) {
        cin >> input[x];
    }
    for(int x = 0; x<N; x++) {
        bool check = true;
        for(int y = 0; y<cnt;  y++) {
            if(input[x] == ar[y][0]) {
                check = false;
            }
        }
        if(check) {
            ar[cnt][0] = input[x];
            ar[cnt][1] = 1;
            cnt++;
        }
    }
    
}