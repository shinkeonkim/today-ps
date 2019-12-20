#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N,input;
vector <int> ar;
int ans_a,ans_b;

int main() {
    cin >> N;

    for(int x = 0; x < N; x++) {
        cin >> input;
        ar.push_back(input);
    }
    sort(ar.begin(), ar.end());
    ans_a = ar.front();
    ans_b = ar.back();
    for(int x = 0; x<N; x++) {
        int l = lower_bound(ar.begin(),ar.end(),-ar[x])- ar.begin() - 1;
        int r = upper_bound(ar.begin(),ar.end(),-ar[x]) - ar.begin() - 1;
        for(int y = -1; y<=1; y++) {
            if(0 <= l+y && l +y <N && l+y != x) {
                if(abs(ar[x]+ar[l+y]) < abs(ans_a+ans_b)) {
                    ans_a = min(ar[x],ar[l+y]);
                    ans_b = max(ar[x],ar[l+y]);
                }
            }
            if(0 <= r+y && r +y <N && r+y != x) {
                if(abs(ar[x]+ar[r+y]) < abs(ans_a+ans_b)) {
                    ans_a = min(ar[x],ar[r+y]);
                    ans_b = max(ar[x],ar[r+y]);
                }
            }

        }
    }
    cout<<ans_a << " "<< ans_b;



}