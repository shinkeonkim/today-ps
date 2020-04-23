#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int tc;
int N;
int main() {
    ifstream in("input.txt");

    if (in.is_open()) {
        in >> tc;
        while(tc--) {
            in >> N;
            bool chk = true;
            for(int x=2; x*x <= N; x++) {
                if(N%x==0) {
                    cout << 0 << "\n";
                    chk = false;
                    break;
                }
            }
            if(chk) cout << 1 << "\n";
        }
    }
    return 0;
}