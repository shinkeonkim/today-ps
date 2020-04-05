#include <iostream>
#include <vector>
using namespace std;

int tc,n,t;
struct st {
    int S,E,order;
};
st ar[1100];
int check[1100]; //only tc 1 solution
bool finded;
bool overlap(st A, st B) {
    if((B.S<=A.S && A.S <B.E) || (B.S<A.E && A.E <B.E)) return true;
    if((A.S<=B.S && B.S <A.E) || (A.S<B.E && B.E <A.E)) return true;
    return false;
}

void g() {
    if(finded) return;
    // for(int x=0; x<n; x++) {
    //     cout << check[x] << " ";
    // }
    // cout<<"\n";
    vector<st> V1,V2;
    V1.clear();
    V2.clear();
    for(int x=0; x<n; x++) {
        if(check[x] == 0) V1.push_back(ar[x]);
        else V2.push_back(ar[x]);
    }

    bool chk = true;
    for(int x=0; x<V1.size(); x++) {
        for(int y=x+1; y<V1.size(); y++) {
            if(overlap(V1[x],V1[y])) {
                // cout<<x << " " << y << "\n";
                chk = false;
                break;
            }
        }
    }
    for(int x=0; x<V2.size(); x++) {
        for(int y=x+1; y<V2.size(); y++) {
            if(overlap(V2[x],V2[y])) {
                // cout<<x << " " << y << "\n";
                chk = false;
                break;
            }
        }
    }

    if(chk) {
        cout << "Case #"<< t << ": ";
        for(int x=0; x<n; x++) {
            if(check[x] == 0) cout<<"C";
            else cout << "J";
        }
        cout<<"\n";
        finded = true;
    }


}


void f(int k) {
    if(finded) return;
    if(k == n -1) {
        for(int x=0; x<2; x++) {
            check[k] = x;
            g();
        }
    }
    else {
        for(int x=0; x<2; x++) {
            check[k] = x;
            f(k+1);
        }
    } 
}



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> tc;
    for(t = 1; t<=tc; t++) {
        finded = false;
        cin >> n;
        for(int x=0; x<n; x++) {
            cin >> ar[x].S >> ar[x].E;
            ar[x].order = x;
        }
        
        f(0);
        if(!finded) {
            cout << "Case #"<< t << ": IMPOSSIBLE\n";
        }
    }
}