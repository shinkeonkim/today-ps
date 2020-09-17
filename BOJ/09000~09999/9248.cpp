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

iv1 suffixarray(string& in) {
    int n = (int)in.size(), c = 0;
    iv1 temp(n), pos2bckt(n), bckt(n), bpos(n), out(n);
    for(int i=0; i<n; i++) out[i] = i;
    sort(out.begin(), out.end(), [&](int a, int b){return in[a] < in[b];});
    for(int i=0; i<n; i++) {
        bckt[i] = c;
        if (i + 1 == n || in[out[i]] != in[out[i+1]]) c++;
    }
    for (int h = 1; h < n && c < n; h <<= 1) {
        for (int i=0; i<n; i++) pos2bckt[out[i]] = bckt[i];
        for (int i=n-1; i>=0; i--) bpos[bckt[i]] = i;
        for (int i=0; i<n; i++) if (out[i] >= n-h)
            temp[bpos[bckt[i]]++] = out[i];
        for (int i=0; i<n; i++) if (out[i] >= h)
            temp[bpos[pos2bckt[out[i]-h]]++] = out[i] - h;
        c = 0;
        for (int i = 0; i + 1 < n; i++) {
            int a = (bckt[i] != bckt[i+1]) || (temp[i] >= n-h)
                    || (pos2bckt[temp[i+1]+h] != pos2bckt[temp[i]+h]);
            bckt[i] = c; c += a;
        }
        bckt[n-1] = c++;
        temp.swap(out);
    }
    return out;
}

iv1 lcparray(string& in,iv1& sa) {
    int n = (int)in.size();
    if (n == 0) return iv1();
    iv1 rank(n), height(n - 1);
    for(int i=0; i<n; i++) rank[sa[i]] = i;
    for(int i=0, h=0; i<n; i++){
        if(rank[i] == 0) continue;
        int j = sa[rank[i]-1];
        while (i+h < n && j+h < n && in[i+h]==in[j+h]) h++;
        height[rank[i]-1] = h;
        if (h > 0) h--;
    }
    return height;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string S;
    cin >> S;

    iv1 ret = suffixarray(S);
    foreach(ret) {
        cout << i + 1 << " ";
    }
    cout <<"\n";
    iv1 ret2 = lcparray(S, ret);
    cout << "x ";
    foreach(ret2) {
        cout << i << " ";
    }
    
}