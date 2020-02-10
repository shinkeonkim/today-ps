#include<iostream>
#include <cstdio>
#define ll long long
using namespace std;
ll N,M,ar[550000],tree[2200000],lazy[2200000],t,a,b,c;

ll init(int start,int end,int idx)
{
    if(start==end) return tree[idx] = ar[start];
    return tree[idx] = init(start,(start+end)/2,idx*2) + init((start+end)/2+1,end,idx*2+1);
}

void update(int start,int end,int left,int right,int idx,ll diff)
{
    if(lazy[idx] != 0)
    {
        tree[idx] += (end-start+1)*lazy[idx];
        if(start!=end)
        {
            lazy[idx*2]+=lazy[idx];
            lazy[idx*2+1]+=lazy[idx];
        }
        lazy[idx]=0;
    }

    if(end < left || right < start) return ;
    if(left <= start && end <= right)
    {
        tree[idx] += diff * (end-start+1);
        if(start !=end)
        {
            lazy[idx*2]+=diff;
            lazy[idx*2+1]+=diff;
        }
        return ;
    }
    update(start,(start+end)/2,left,right,idx*2,diff);
    update((start+end)/2+1,end,left,right,idx*2+1,diff);

    tree[idx]=tree[idx*2]+tree[idx*2+1];
}

ll query(int start,int end,int left,int right,int idx)
{
    if(lazy[idx] != 0)
    {
        tree[idx] += (end-start+1)*lazy[idx];
        if(start!=end)
        {
            lazy[idx*2]+=lazy[idx];
            lazy[idx*2+1]+=lazy[idx];
        }
        lazy[idx]=0;
    }

    if(right < start || end < left) return 0;
    if(left <= start && end <= right) return tree[idx];
    return query(start,(start+end)/2,left,right,idx*2) + query((start+end)/2+1,end,left,right,idx*2+1);
}

int main()
{
    scanf("%lld",&N);
    for(int x=0; x<N; x++) scanf("%lld",&ar[x]);
    init(0,N-1,1);
    scanf("%lld",&M);

    for(int x=0; x<M; x++)
    {
        scanf("%lld",&t);
        if(t==1)
        {
            scanf("%lld %lld %lld",&a,&b,&c);
            if(a>b)
            {
                ll tmp = b;
                b=a;
                a=tmp;
            }
            update(0,N-1,a-1,b-1,1,c);
        }
        if(t==2)
        {
            scanf("%lld",&a);
            printf("%lld\n",query(0,N-1,a-1,a-1,1));
        }
    }
}