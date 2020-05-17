#include <iostream>
#include <vector>

using namespace std;
typedef unsigned int uint;


uint tc,k,n;
vector <uint> V;
vector <uint> V2;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> tc;
    while(tc--) {
        uint answer = 0;
        V.clear();
        V2.clear();
        cin >> k >> n;
        if(k==0) {
            for(int x=1; x<=26; x++) {
                V.push_back(n%2);
                n/=2;
            }

            int z = 1;
            int idx = 0;
            V2.push_back(0);
            for(int x=1; x<=32; x++) {
                if(x == z) {
                    V2.push_back(-1);
                    z*=2;
                }
                else {
                    V2.push_back(V[idx++]);
                }
            }

            for(int d=1; d<=31; d*=2) {
                int count = 0;
                for(int y = d; y<=31; y+=2*d) {
                    for(int z=y; z<y+d && z<=31; z++) {
                        if(z!=d) count += V2[z]>0 ? 1: 0;
                    }
                }
                V2[d] = count;
            }
            for(int d=1; d<=32; d*=2) {
                V2[d] = V2[d]%2;
            }
            for(int x=31; x>=1; x--) {
                answer*=2;
                answer+=V2[x];
            }
            cout << answer << "\n";

        }
        else {
            V.push_back(-1);
             for(int x=1; x<=32; x++) {
                V.push_back(n%2);
                n/=2;
            }

            int S = 0;
            for(int d=1; d<=32; d*=2) {
                int count = 0;
                for(int y = d; y<=32; y+=2*d) {
                    for(int z=y; z<y+d && z<=32; z++) {
                        if(z!=d) count += V[z]>0 ? 1: 0;
                    }
                }
                if(V[d] != count %2) S += d;
            }
            V[S] = 1-V[S];

            int zz = 16;
            for(int d=31; d>=1; d--) {
                if(d != zz) {
                    answer*=2;
                    answer+=V[d];
                }
                else {
                    zz/=2;
                }
            }
            cout << answer << "\n";

        }


    }
}