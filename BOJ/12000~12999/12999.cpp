#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int N,K,M,SQRT,ANS,ANS_M,L_1,R_1,L_2,R_2;
int A[220000];
int cnt_Mo[220000];
int cnt[220000];
int number_cnt[220000];
int answer[220000];


struct QUERY {
    int l,r,order;
} Q[110000];

bool compare(QUERY a, QUERY b) {
    if(a.l/SQRT < b.l/SQRT) return true;
    else if(a.l/SQRT == b.l/SQRT) {
        if(a.r < b.r) return true;
    }
    return false;
}

void add(int idx) {
    int d = number_cnt[A[idx]];
    cnt[d]--;
    cnt_Mo[d/SQRT]--;
    number_cnt[A[idx]]++;
    
    d = number_cnt[A[idx]];
    cnt[d]++;
    cnt_Mo[d/SQRT]++;
}  

void sub(int idx) {
    int d = number_cnt[A[idx]];
    cnt[d]--;
    cnt_Mo[d/SQRT]--;

    number_cnt[A[idx]]--;
    
    d = number_cnt[A[idx]];
    cnt[d]++;
    cnt_Mo[d/SQRT]++;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for(SQRT = 1; SQRT*SQRT <=N; SQRT++);
    for(int x = 1; x <= N; x++) {
        cin >> A[x];
        A[x]+=100001;
    }
    for(int x = 0; x < M; x++) {
        cin >> Q[x].l >> Q[x].r;
        Q[x].order = x;
    }
    sort(Q,Q+M,compare);

    L_1 = 1;
    R_1 = 1;
    add(1);
    cnt_Mo[0] = cnt[0] = 110000;
    for(int x=0; x<M; x++) {;
        L_2 = Q[x].l;
        R_2 = Q[x].r;
        while(L_1 > L_2) add(--L_1);
        while(R_1 < R_2) add(++R_1);
        while(L_1 < L_2) sub(L_1++);
        while(R_1 > R_2) sub(R_1--);
        
        ANS_M = (N+1)/SQRT;
        while(cnt_Mo[ANS_M] == 0) ANS_M--;
        ANS = min(N,SQRT*(ANS_M+1));
        while(cnt[ANS] == 0) ANS--;
        
        answer[Q[x].order]=ANS;
        
        L_1 = Q[x].l;
        R_1 = Q[x].r;
    }

    for(int x=0; x<M; x++) {
        cout<<answer[x]<<"\n";
    }

}