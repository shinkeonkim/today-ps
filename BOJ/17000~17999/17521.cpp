#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;

ll N, money, coin;
ll a;

vector <ll> G,G2;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> money;
    for(int x = 0; x < N; x++) {
        cin >> a;
        if(x==0) {
            G.push_back(a);
        }
        else if(G[G.size()-1] != a){
            G.push_back(a);
        }
    }

    G2.push_back(G[0]);
    int cnt = 1;
    for(int i = 1; i < G.size(); i++) {
        if(i+1 < G.size()) {
            if((G2[cnt-1] < G[i] && G[i] < G[i+1]) || (G2[cnt-1] > G[i] && G[i] > G[i+1])) {
                continue;
            } 
            else {
                cnt++;
                G2.push_back(G[i]);
            }
        }
        else {
            cnt++;
            G2.push_back(G[i]);
        }
    }


    if(cnt > 1 && G2[0] > G2[1]) {
        G2.erase(G2.begin());
        cnt--;
    }

    if(cnt > 1 && G2[G2.size()-2] > G2[G2.size()-1]) {
        G2.erase(G2.begin()+G2.size()-1);
        cnt--;
    }

    for(int i = 0; i < G2.size(); i++) {
        if(i==0 && i != G2.size() -1) {
            ll buy = money / G2[i];
            coin = buy;
            money = money - buy * G2[i];
        }
        else if(i == G2.size() -1) {
            money += coin * G2[i];
            coin = 0;
        }
        else {
            if(G2[i-1] < G2[i] && G2[i] > G2[i+1]) {
                money += coin * G2[i];
                coin = 0;
            }
            else {
                ll buy = money / G2[i];
                coin = buy;
                money = money - buy * G2[i];
            }
        }
    }

    cout << money;

}