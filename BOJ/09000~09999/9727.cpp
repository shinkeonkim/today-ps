#include <iostream>
using namespace std;
int T;
int ar[11][11];
bool check;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    for(int t = 1; t<=T; t++) {
        check = true;
        for(int y = 0; y<6; y++) {
            for(int x = 0; x<6; x++) {
                cin >> ar[y][x];
            }
        }
        for(int y = 0; y<6; y++) {
            int k = 0;
            for(int x = 0; x<6; x++) {
                k |= 1<<(ar[y][x]-1);
            }
            if(k != 63) {
                check = false;
            }
        }

        for(int x = 0; x<6; x++) {
            int k = 0;
            for(int y = 0; y<6; y++) {
                k |= 1<<(ar[y][x]-1);
            }
            if(k != 63) {
                check = false;
            }
        }
        int k=0,k2=0;
        for(int x= 0; x<6; x++) {
            k |= 1<<(ar[x][x]-1);
            k2 |= 1<<(ar[x][5-x]-1);
        }
        if(k!=63 || k2!=63) check= false;

        if(check) {
            cout<<"Case#"<<t<<": 1\n";
        }
        else {
            cout<<"Case#"<<t<<": 0\n";
        }


    }
}