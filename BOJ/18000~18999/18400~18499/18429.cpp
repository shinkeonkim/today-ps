#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N,K,a,ans=0;
vector <int> V;
vector <int> V2;
 
int main() {
    cin >> N >> K;
    for(int x = 0; x < N; x++) {
        cin >> a;
        V.push_back(x);
        V2.push_back(a);
    }
    sort(V2.begin(),V2.end());
    do {
        bool check = true;
        int s = 500;
        for(int i = 0; i <V.size(); i++) {
            s += V2[V[i]] - K;
            if(s < 500) check = false;
        }
        if(check) ans++;
    }
    while(next_permutation(V.begin(),V.end()));
    cout<<ans;
}