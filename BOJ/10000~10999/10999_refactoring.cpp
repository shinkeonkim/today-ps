#include <bits/stdc++.h>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)

using namespace std;

typedef long long ll;

ll N,M,K;
ll a,b,c,d;
ll ar[1100000],tree[4400000],lazy[4400000];

void update(int start, int end, int left, int right, int idx, ll diff) {
  if(lazy[idx] != 0) {
    tree[idx] += (end-start+1)*lazy[idx];
    if(start!=end) {
        lazy[idx*2] += lazy[idx];
        lazy[idx*2+1] += lazy[idx];
    }
    lazy[idx] = 0;
  }

  if(end < left || right < start) return ;

  if(left <= start && end <= right) {
    tree[idx]+=(end-start+1)*diff;
    if(start!=end) {
      lazy[idx*2] += diff;
      lazy[idx*2+1] += diff; 
    }
    return ;
  }

  update(start,(start+end)/2,left,right,idx*2,diff);
  update((start+end)/2+1,end,left,right,idx*2+1,diff);

  tree[idx] = tree[idx*2]+tree[idx*2+1];
}

ll query(int start, int end, int left, int right, int idx) {
  if(lazy[idx] != 0) {
    tree[idx] += (end-start+1)*lazy[idx];
    if(start!=end) {
      lazy[idx*2] += lazy[idx];
      lazy[idx*2+1] += lazy[idx];
    }
    lazy[idx] = 0;
  }

  if(right < start || end < left) return 0;
  if(left <= start && end <= right) return tree[idx];
  return query(start,(start+end)/2,left,right,idx*2)+query((start+end)/2+1,end,left,right,idx*2+1);
}

int main() {
  cin>>N>>M>>K;
  for1(1, N+1) {
    cin>>ar[i];
    update(1, N, i, i, 1, ar[i]);
  }
  for1(0, M+K) {
    cin >> a >> b >> c;
    if(a == 1) {
      cin >> d;
      update(1,N,b,c,1,d);
    } else {
      cout << query(1,N,b,c,1) << "\n";
    }
  }
}