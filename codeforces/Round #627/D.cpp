#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 880000
using namespace std; 
typedef long long ll;

ll N,input,ans;
vector<ll> A;
vector<ll> B;
vector<ll> a;
vector<ll> sTree[MAX];

void makeTree(int idx, int ss, int se) 
{ 
    if (ss == se) 
    { 
        sTree[idx].push_back(a[ss]); 
        return; 
    } 
  
    int mid = (ss+se)/2; 
    makeTree(2*idx+1, ss, mid); 
    makeTree(2*idx+2, mid+1, se); 
  
    merge(sTree[2*idx+1].begin(), sTree[2*idx+1].end(), sTree[2*idx+2].begin(), sTree[2*idx+2].end(), back_inserter(sTree[idx])); 
}

int query(int node, int start, int end, int ss, int se, int k) { 
    if (ss > end || start > se) return 0; 
  
    if (ss <= start && se >= end) { 
        return sTree[node].size() - (upper_bound(sTree[node].begin(), sTree[node].end(), k) - sTree[node].begin()); 
    } 
  
    int mid = (start+end)/2; 
    int p1 = query(2*node+1, start, mid, ss, se, k); 
    int p2 = query(2*node+2, mid+1, end, ss, se, k); 
    return p1 + p2; 
} 

int main() 
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    for(int x = 0; x< N; x++) {
        cin >> input;
        A.push_back(input);
    }
    for(int x = 0; x<N; x++) {
        cin >> input;
        B.push_back(input);
    }
    for(int x=0; x<N; x++) {
        a.push_back(A[x]-B[x]);
    }
    makeTree(0, 0, N-1);
    for(int x = 0; x<N; x++) {
        ans += query(0,0,N-1,x+1,N-1,-a[x]);
    }
    cout<<ans;
} 
