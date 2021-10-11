#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define all(v) (v).begin(),(v).end()

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int> > iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull> > ullv2;
typedef complex<double> base;

void fft(vector <base> &a, bool invert) {
  int n = sz(a);
  for (int i=1,j=0;i<n;i++){
    int bit = n >> 1;
    for (;j>=bit;bit>>=1) j -= bit;
    j += bit;
    if (i < j) swap(a[i],a[j]);
  }
  for (int len=2;len<=n;len<<=1){
    double ang = 2*M_PI/len*(invert?-1:1);
    base wlen(cos(ang),sin(ang));
    for (int i=0;i<n;i+=len){
      base w(1);
      for (int j=0;j<len/2;j++){
        base u = a[i+j], v = a[i+j+len/2]*w;
        a[i+j] = u+v;
        a[i+j+len/2] = u-v;
        w *= wlen;
      }
    }
  }
  if (invert){
    for (int i=0;i<n;i++) a[i] /= n;
  }
}
 
void multiply(const vector<int> &a,const vector<int> &b, vector<int> &res) {
  vector <base> fa(all(a)), fb(all(b));
  int n = 1;
  while (n < max(sz(a),sz(b))) n <<= 1;
  fa.resize(n); fb.resize(n);
  fft(fa,false); fft(fb,false);
  for (int i=0;i<n;i++) fa[i] *= fb[i];
  fft(fa,true);
  res.resize(n);
  for (int i=0;i<n;i++) res[i] = int(fa[i].real()+(fa[i].real()>0?0.5:-0.5));
}

void mul(vector<base>& a) {
  int n = 1;
	while (n <= a.size()) n <<= 1;
	n <<= 1;
	a.resize(n);
	fft(a, false);
	for (int i = 0; i < n; i++) a[i] = a[i] * a[i];
	fft(a, 1);
}

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int N, M, a, ans = 0;
  iv1 ret;

  vector<base> X(220000);

  cin >> N;
  
  for1(0, N) {
    cin >> a;
    X[a] = base(1, 0);
  }
  X[0] = base(1, 0);

  mul(X);

  cin >> M;

  while(M--) {
    cin >> a;
    if(round(X[a].real()) > 0) ans++;
  }

  cout << ans;
}