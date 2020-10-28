#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
struct Query {
    int i,j,k;
};

Query Q[110000];
int N,M,ar[110000];
int S[1100000];
int ans[1100000];
int cnt;
int Z;
int b_i,b_j,c_i,c_j; // b = before c= current;

void add(int num)
{
    if(S[num] == 0 ) cnt++;
    S[num]++;
}

void sub(int num)
{
    if(S[num] == 1) cnt--;
    S[num]--;
}
bool compare(Query a, Query b)
{
    if(a.i/Z < b.i/Z) return true;
    else if(a.i/Z == b.i/Z)
    {
        return a.j < b.j;
    }
    return false;
}

int main()
{
    cin>>N;
    Z=(int)sqrt(N);
    for(int x=1; x<=N; x++)
    {
        cin>>ar[x];
    }
    cin>>M;
    for(int x=0; x<M; x++)
    {
        Q[x].k=x;
        cin>>Q[x].i>>Q[x].j;
    }
    sort(Q,Q+M,compare);
    
    // (정렬된) 첫번째 쿼리 처리
    for(int x=Q[0].i; x<=Q[0].j; x++)
    {
        add(ar[x]);
    }
    ans[Q[0].k] = cnt;
    b_i = Q[0].i, b_j = Q[0].j;

    for(int y=1; y<M; y++)
    {
        c_i = Q[y].i; c_j=Q[y].j;
        for(int x=b_i; x<c_i ; x++) sub(ar[x]);
        for(int x=c_i; x<b_i ; x++) add(ar[x]);
        for(int x=c_j; x>b_j ; x--) add(ar[x]);
        for(int x=b_j; x>c_j ; x--) sub(ar[x]);
        ans[Q[y].k] = cnt;
        b_i = c_i; b_j = c_j;
    }
    for(int x=0; x<M; x++)
    {
        cout<<ans[x]<<"\n";
    }
}