#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N,X[110],Y[110],ans;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for(int i=0; i<N; i++) cin >> X[i] >> Y[i];

    for(int i=0; i <N; i++)
        for(int j =0; j <N; j++)
            for(int k = 0; k<N; k++)
                if(i!=j && j!=k && i!=k)
                    if(X[i] == X[j] && Y[j] == Y[k]) {
                        ans = max(ans,abs(Y[j]-Y[i]) * abs(X[j]-X[k]));
                    }
    cout << ans;
}