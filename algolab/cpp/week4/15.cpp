#include <fstream>
#include <iostream>
using namespace std;

int tc,cnt;
unsigned int N,N2,z;
int main() {
    ifstream in("input.txt");

    z = 1<<31;
    if (in.is_open()) {
        in >> tc;
        while(tc--) {
            in >> N;
            N2 = N;
            cnt = 0;
            while(N2 > 0) {
                if(N2 %2 == 1) cnt++;
                N2/=2;
            }
            if(cnt%2==0) {
                cout << N << "\n";
            }
            else {
                cout << N+z <<"\n";
            }
        }
    }
    return 0;
}