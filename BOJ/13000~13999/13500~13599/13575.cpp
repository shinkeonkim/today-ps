#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()
#define all(v) (v).begin(),(v).end()

using namespace std;
typedef vector <int> iv1;
typedef complex<double> base;

iv1 v(1100);

void fft(vector <base> &a, bool invert, bool integer_result=false)
{
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
        for (int i=0;i<n;i++) {
          a[i] /= n;
          if(integer_result) {
            a[i] = base(round(a[i].real()), round(a[i].imag()));
          }
        }
    }
}
 
iv1 multiply(const iv1 &a,const iv1 &b) {
  vector <base> fa(all(a)), fb(all(b));
  int n = 1;
  while (n <= max(sz(a), sz(b))) n <<= 1;
  fa.resize(n); fb.resize(n);
  fft(fa,0,1); fft(fb,0,1);
  for (int i=0;i<n;i++) fa[i] *= fb[i];
  fft(fa,1,1);

  iv1 ret(n);
  for (int i=0;i<n;i++) {
    ret[i] = round(fa[i].real());
    if(ret[i]) ret[i] = 1;
  };
  return ret;
}

iv1 pow_fft(iv1 a, int b) {
  iv1 ret = v; b--;
  while(b) {
    if (b & 1) ret = multiply(ret, a);
    b >>= 1;
    a = multiply(a, a);
  }
  return ret;
}

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int N, K, a;

  cin >> N >> K;

  for1(0, N) {
    cin >> a;
    v[a] = 1;
  }

  iv1 ret = pow_fft(v, K);

  for(int i = 0; i < ret.size(); i++) {
    if(ret[i] > 0) cout << i << " ";
  }
}