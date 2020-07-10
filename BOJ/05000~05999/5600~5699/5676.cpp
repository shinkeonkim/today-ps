#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll N,K;
ll ar[110000];
ll mo[440],sq;
ll mo_zero[440];
char order;
int idx,V;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while(cin >> N >> K) {
        fill(mo,mo+440,1);
        fill(mo_zero, mo_zero+440, 0);
        fill(ar,ar+100001, 0);
        for(sq = 1; sq * sq <= N; sq++) ;
        for(int i = 0; i < N; i++) {
            cin >> ar[i];
            if(ar[i] > 0) ar[i] = 1;
            else if(ar[i] < 0) ar[i] = -1;
            
            if(ar[i] == 0) mo_zero[i/sq]++;
            else {
                mo[i/sq] *= ar[i];
            }
        }


        for(int i = 0; i < K; i++) {
            cin >> order >> idx >> V;
            if(order == 'C') {
                idx--;
                if(V > 0) {
                    V = 1;
                }
                else if(V < 0){
                    V = -1;
                }
                
                if(ar[idx] != V) {
                    if(ar[idx] == 0) {
                        mo_zero[idx/sq]--;
                        mo[idx/sq] *= V;
                    }
                    else {
                        if(V == 0) {
                            mo[idx/sq] *= ar[idx];
                            mo_zero[idx/sq]++;
                        }
                        else {
                            mo[idx/sq] *= -1;
                        }
                    }
                    ar[idx] = V;
                }

            }
            else if(order == 'P') {
                int start = idx;
                int end = V;
                start--;
                end--;

                int mo_zero_cnt = 0;
                int ret = 1;

                for(int m = start/sq; m<= end/sq; m++) {
                    ret *= mo[m];
                    mo_zero_cnt += mo_zero[m];
                }
                for(int s = (start/sq)*sq; s < start && s < N; s++) {
                    if(ar[s] == 0) mo_zero_cnt--;
                    else ret *= ar[s];
                }
                for(int e = min((end/sq + 1)*sq -1, N-1); e > end && e > 0; e--) {
                    if(ar[e] == 0) mo_zero_cnt--;
                    else ret *= ar[e];
                }
                
                if(mo_zero_cnt > 0) ret = 0;
                
                if(ret == 0) {
                    cout << 0;
                }
                else if(ret > 0) {
                    cout << "+";
                }
                else {
                    cout << "-";
                }

            }
            // for(int x = 0; x<sq; x++) {
            //     cout << mo[x] <<" ";
            // }
            // cout << "\n";
            // for(int x = 0; x<N; x++) {
            //     cout << ar[x] << " ";
            // }
            // cout <<"\n";
        }
        cout << "\n";
    }    
    
}