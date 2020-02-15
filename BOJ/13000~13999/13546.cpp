#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int N,K,M,SQRT,ANS,ANS_M,L_1,R_1,L_2,R_2;
int A[110000];
int cnt_Mo[110000];
int cnt[110000];
int answer[110000];
list <int> cntV[110000];


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
    if(cntV[A[idx]].size() >=2) {
        int d = cntV[A[idx]].back() - cntV[A[idx]].front();
        cnt[d]--;
        cnt_Mo[d/SQRT]--;
    }
    if(cntV[A[idx]].empty() || cntV[A[idx]].back() < idx) {
        cntV[A[idx]].push_back(idx);
    }
    else{
        cntV[A[idx]].push_front(idx);
    }
    if(cntV[A[idx]].size() >=2) {
        int d = cntV[A[idx]].back() - cntV[A[idx]].front();
        cnt[d]++;
        cnt_Mo[d/SQRT]++;
    }

}  

void sub(int idx) {
    if(cntV[A[idx]].size() >=2) {
        int d = cntV[A[idx]].back() - cntV[A[idx]].front();
        cnt[d]--;
        cnt_Mo[d/SQRT]--;
    }
    if(idx == cntV[A[idx]].front()) {
        cntV[A[idx]].pop_front();
    }
    else{
        cntV[A[idx]].pop_back();
    }
    if(cntV[A[idx]].size() >=2) {
        int d = cntV[A[idx]].back() - cntV[A[idx]].front();
        cnt[d]++;
        cnt_Mo[d/SQRT]++;
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;
    for(SQRT = 1; SQRT*SQRT <=N; SQRT++);
    for(int x = 1; x <= N; x++) cin >> A[x];
    cin >> M;
    for(int x = 0; x < M; x++) {
        cin >> Q[x].l >> Q[x].r;
        Q[x].order = x;
    }
    sort(Q,Q+M,compare);

    L_1 = 1;
    R_1 = 1;
    add(1);
    cnt_Mo[0] = cnt[0] = K+1;
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


/*
7 7
4 5 6 6 5 7 4
5
6 6
5 6
3 5
3 7
1 7


5 5
1 2 1 3 4
2
1 3
1 5

5 1
1 1 1 1 1
5
1 1
1 2
1 3
1 4
1 5
*/