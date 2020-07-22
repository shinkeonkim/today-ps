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

struct st {
    string a;
    int idx;
    bool operator<(st b) {
        if(a.compare(b.a) != 0) {
            return a < b.a;
        }
        return idx < b.idx;
    }
};

st arr[22000];
vector <st> ar;
st a,b;
int N,ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N;
    for1(0,N) {
        cin >> arr[i].a;
        arr[i].idx = i;
    }
    sort(arr,arr+N);

    ar.pb(arr[0]);
    
    for1(1,N) {
        if(ar.back().a.compare(arr[i].a) != 0) {
            ar.pb(arr[i]);
        }
    }
    a = ar[0];
    b = ar[1];
    if(a.idx > b.idx) {
        st tmp;
        tmp = a;
        a = b;
        b = tmp;
    }
    ans = 0;

    for1(1,sz(ar)) {
        ll cnt = 0;
        while(cnt <ar[i-1].a.length() && cnt < ar[i].a.length()) {
            if(ar[i-1].a[cnt] == ar[i].a[cnt]) {
                cnt++;
            }
            else {
                break;
            }
        }
        cout << ar[i-1].a << " " << ar[i].a << " " << cnt <<"\n";
        st aa = ar[i-1];
        st bb = ar[i];
        if(aa.idx > bb.idx) {
            st tmp;
            tmp = aa;
            aa = bb;
            bb = tmp;
        }

        if(cnt > ans) {
            ans = cnt;
            a = aa;
            b = bb;
        }
        else if(cnt == ans) {
            if(aa.idx < a.idx) {
                ans = cnt;
                a = aa;
                b = bb;
            }
            else if(aa.idx == a.idx) {
                if(bb.idx < b.idx) {
                    ans = cnt;
                    a = aa;
                    b = bb;
                }
            }
        }
        cout << a.a << " " << b.a << "\n";
    }
    if(a.idx < b.idx) {
        cout << a.a << "\n" << b.a;
    }
    else {
        cout << b.a << "\n" << a.a;
    }
    
}


// 4
// awdas
// awd
// awda
// awdak