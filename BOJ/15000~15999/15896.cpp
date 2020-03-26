#include <iostream>
#define Mod 1999
#define Mx 9876543210
using  namespace std;
typedef long long ll;
int N;
ll A[1100000];
ll B[1100000];

// ans1
ll cnt_A[33];
ll cnt_B[33];
ll ans1;

// ans2
ll minA[33][2];
ll minB[33][2];


int main() {
    cin >> N;
    for(int x=0; x<N; x++) {
        cin >> A[x];
    }
    for(int x=0; x<N; x++) {
        cin >> B[x];
    }

    // 1st answer
    for(int x=0; x<N; x++) {
        ll k = A[x];
        int idx =0;
        while(k > 0) {
            cnt_A[idx++] += k%2;
            k/=2;
        }
    }
    for(int x=0; x<N; x++) {
        ll k = B[x];
        int idx =0;
        while(k > 0) {
            cnt_B[idx++] += k%2;
            k/=2;
        }
    }
    ll i = 1;
    for(int x=0; x<30; x++) {
        ans1 += (i * cnt_A[x] * cnt_B[x])%Mod;
        ans1%=Mod;
        i*=2;
    }


    // 2nd How...
    for(int x=0; x<33; x++) {
        for(int y=0;y<2; y++) minA[x][y] = minB[x][y] = Mx;
    }

    ll g = 1; //기준
    for(int x=0; x<30; x++) {
        
    }






    cout<<ans1;

}