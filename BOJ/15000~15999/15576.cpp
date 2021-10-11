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
typedef vector <long long> llv1;
typedef complex<double> base;

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
 
llv1 multiply(const llv1 &a,const llv1 &b) {
  vector <base> fa(all(a)), fb(all(b));
  int n = 1;
  while (n <= sz(a)+ sz(b)) n <<= 1;
  fa.resize(n); fb.resize(n);
  fft(fa,0,1); fft(fb,0,1);
  for (int i=0;i<n;i++) fa[i] *= fb[i];
  fft(fa,1,1);

  llv1 ret(n);
  for (int i=0;i<n;i++) {
    ret[i] = round(fa[i].real());
    // if(ret[i]) ret[i] = 1;
  };
  return ret;
}

llv1 ans;
llv1 A, B;
string a, b;

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  ans.resize(2220000);

  cin >> a >> b;
  for(auto i : a) {
    A.pb(i - '0');
  }
  for(auto i : b) {
    B.pb(i - '0');
  }
  reverse(A.begin(), A.end());
  reverse(B.begin(), B.end());

  llv1 ret = multiply(A, B);

  for(int i = 0; i < ret.size(); i++) {
    ans[i] = ret[i];
  }

  int mx = 0;
  for(int i = 0; i <= 2200000; i++) {
    if(ans[i] > 0) {
      mx = i;
    }
    if(ans[i] > 9) {
      ans[i+1] += ans[i] / 10;
      ans[i] = ans[i] % 10;
    }
  }

  for(int i = mx; i > -1; i--) {
    cout << ans[i];
  }
}