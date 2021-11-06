#include <iostream>
#include <list>
#include <algorithm>
#define OFFSET 100000
using namespace std;

int N,M,SQRT,ans,ans_m,L_1,R_1,L_2,R_2;
int A[220000];
int pre_sum[220000];
int cnt_mo[220000];
int cnt[220000];
int answer[220000];
list <int> cntV[220000];

struct QUERY {
  int l,r,order;
} Q[220000];

bool compare(QUERY a, QUERY b) {
  if(a.l/SQRT < b.l/SQRT) return true;
  else if(a.l/SQRT == b.l/SQRT) {
    if(a.r < b.r) return true;
  }
  return false;
}

void add(int idx) {
  if(cntV[pre_sum[idx]+OFFSET].size() >=2) {
    int d = cntV[pre_sum[idx]+OFFSET].back() - cntV[pre_sum[idx]+OFFSET].front();
    cnt[d]--;
    cnt_mo[d/SQRT]--;
  }
  if(cntV[pre_sum[idx]+OFFSET].empty() || cntV[pre_sum[idx]+OFFSET].back() < idx) {
    cntV[pre_sum[idx]+OFFSET].push_back(idx);
  }
  else{
    cntV[pre_sum[idx]+OFFSET].push_front(idx);
  }
  if(cntV[pre_sum[idx]+OFFSET].size() >=2) {
    int d = cntV[pre_sum[idx]+OFFSET].back() - cntV[pre_sum[idx]+OFFSET].front();
    cnt[d]++;
    cnt_mo[d/SQRT]++;
  }
}  

void sub(int idx) {
  if(cntV[pre_sum[idx]+OFFSET].size() >=2) {
    int d = cntV[pre_sum[idx]+OFFSET].back() - cntV[pre_sum[idx]+OFFSET].front();
    cnt[d]--;
    cnt_mo[d/SQRT]--;
  }
  if(idx == cntV[pre_sum[idx]+OFFSET].front()) {
    cntV[pre_sum[idx]+OFFSET].pop_front();
  }
  else{
    cntV[pre_sum[idx]+OFFSET].pop_back();
  }
  if(cntV[pre_sum[idx]+OFFSET].size() >=2) {
    int d = cntV[pre_sum[idx]+OFFSET].back() - cntV[pre_sum[idx]+OFFSET].front();
    cnt[d]++;
    cnt_mo[d/SQRT]++;
  }
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie();

  cin >> N;
  for(SQRT = 1; SQRT*SQRT <=N; SQRT++);
  for(int x = 1; x <= N; x++) {
    cin >> A[x];
    pre_sum[x] = pre_sum[x-1] + A[x];
  }

  cin >> M;

  for(int x = 0; x < M; x++) {
    cin >> Q[x].l >> Q[x].r;
    Q[x].order = x;
    Q[x].l--;
  }
  sort(Q,Q+M,compare);

  L_1 = 0;
  R_1 = 0;
  add(0);
  cnt_mo[0] = cnt[0] = 1;
  for(int x=0; x<M; x++) {;
    L_2 = Q[x].l;
    R_2 = Q[x].r;
    while(L_1 > L_2) add(--L_1);
    while(R_1 < R_2) add(++R_1);
    while(L_1 < L_2) sub(L_1++);
    while(R_1 > R_2) sub(R_1--);
    
    ans_m = (N+1)/SQRT;
    while(cnt_mo[ans_m] == 0) ans_m--;
    ans = min(N,SQRT*(ans_m+1));
    while(cnt[ans] == 0) ans--;
    
    answer[Q[x].order]=ans;
    
    L_1 = Q[x].l;
    R_1 = Q[x].r;
  }

  for(int x=0; x<M; x++) {
    cout<<answer[x]<<"\n";

  }
}
