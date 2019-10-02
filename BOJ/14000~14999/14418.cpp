#include <iostream>
using namespace std;
int ar[5][2];
bool check = false;
int main() {
    for (int y = 0; y < 3; y++) {
        cin >> ar[y][0] >> ar[y][1];
    }

    for(int big = 0; big<3; big++) {
        for(int x=0; x<2; x++) {
            for(int y=0; y<2; y++) {
                for(int z=0; z<2; z++) {
                    if(ar[big][x] == ar[(big+1)%3][y] + ar[(big+2)%3][z] && ar[(big+1)%3][1-y] == ar[(big+2)%3][1-z]) {
                        if(ar[big][x] == ar[big][1-x]+ar[(big+1)%3][1-y]) {
                            cout<<"YES";
                            return 0;
                        }
                    }

                    if(ar[big][x] == ar[(big+1)%3][y] &&ar[big][x] == ar[(big+2)%3][z]) {
                        if(ar[big][x] == ar[big][1-x] + ar[(big+1)%3][1-y] + ar[(big+2)%3][1-z]) {
                            cout<<"YES";
                            return 0;
                        }
                    }
                }
            }
        }
    }


    cout<<"NO";
}