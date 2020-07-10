#include <bits/stdc++.h>

#define for1(s, n) for (int i = s; i < n; i++)
#define for1j(s, n) for (int j = s; j < n; j++)
#define foreach(k) for (auto i : k)
#define foreachj(k) for (auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> iv1;
typedef vector<vector<int>> iv2;
typedef vector<ll> llv1;
typedef unsigned int uint;
typedef vector<ull> ullv1;
typedef vector<vector<ull>> ullv2;

struct segment
{
    int start, end;
    bool operator<(segment b)
    {
        if (start != b.start)
            return start < b.start;
        else
            return end < b.end;
    }
};

int count(int start, int end, int k) {
    if(start > end) {
        return 0;
    }
    if((end - start) % k == 0) {
        return (end -start) /k;
    }
    else {
        return (end - start)/k + 1;
    }
}

int N, K;
segment sg[11000];
vector<segment> ar;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> K;
    for1(0, N)
    {
        cin >> sg[i].start >>  sg[i].end;
    }
    sort(sg, sg + N);

    segment current = {sg[0].start, sg[0].end};
    
    for(int x = 1; x < N; x++) {
        if(current.end >= sg[x].start || current.end >= sg[x].end) {
            current.end = max(current.end, sg[x].end);
        }    
        else {
            ar.pb(current);
            current = {sg[x].start, sg[x].end};
        }
    }
    ar.pb(current);

    int answer = 0;
    int ct = 0;
    for(auto i : ar) {
        int z = count(max(ct,i.start), i.end, K);
        answer += z;
        ct = max(ct,i.start) + z * K;

    }
    cout <<answer;

}