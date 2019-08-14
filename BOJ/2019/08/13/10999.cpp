#include <iostream>
#define ll long long
using namespace std;
ll N,M,K,a,b,c,d;
ll ar[1100000],tree[4400000],lazy[4400000];

ll init(int start, int end, int idx) 
{
    if(start == end) return tree[idx] = ar[start];
    return tree[idx] = init(start,(start+end)/2,idx*2)+init((start+end)/2+1,end,idx*2+1);
}

void update(int start, int end, int left, int right, int idx, ll diff)
{
    // lazy 갱신
    if(lazy[idx] != 0)
    {
        tree[idx] += (end-start+1)*lazy[idx];
        if(start!=end)
        {
            lazy[idx*2] += lazy[idx];
            lazy[idx*2+1] += lazy[idx];
        }
        lazy[idx] = 0;
    }

    if(end < left || right < start) return ;

    if(left <= start && end <= right) 
    {
        tree[idx]+=(end-start+1)*diff;
        if(start!=end)
        {
            lazy[idx*2] += diff;
            lazy[idx*2+1] += diff; 
        }
        return ;
    }

    update(start,(start+end)/2,left,right,idx*2,diff);
    update((start+end)/2+1,end,left,right,idx*2+1,diff);

    tree[idx] = tree[idx*2]+tree[idx*2+1];

}

ll query(int start, int end, int left, int right, int idx)
{
    if(lazy[idx] != 0)
    {
        tree[idx] += (end-start+1)*lazy[idx];
        if(start!=end)
        {
            lazy[idx*2] += lazy[idx];
            lazy[idx*2+1] += lazy[idx];
        }
        lazy[idx] = 0;
    }

    if(right < start || end < left) return 0;
    if(left <= start && end <= right) return tree[idx];
    return query(start,(start+end)/2,left,right,idx*2)+query((start+end)/2+1,end,left,right,idx*2+1);
}

int main()
{
    cin>>N>>M>>K;
    for(int x=1; x<=N; x++)
    {
        cin>>ar[x];
    }
    tree[1] = init(1,N,1);
    for(int x=0; x<M+K; x++)
    {
        cin>>a;
        if(a==1)
        {
            cin>>b>>c>>d;
            update(1,N,b,c,1,d);
        }
        else
        {
            cin>>b>>c;
            cout << query(1,N,b,c,1) <<endl;
        }
    }
}