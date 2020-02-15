#include <iostream>
using namespace std;
int N;
int a;
int cnt[110000];
int main() {
    cin >> N;
    for(int x=0; x<N; x++) {
        cin >> a;
        cnt[a] ++;
    }
    for(int x=100000; x>=0; x--) {
        if(x==cnt[x]) {
            cout<<x;
            return 0;
        }
    }
    cout<<-1;
}