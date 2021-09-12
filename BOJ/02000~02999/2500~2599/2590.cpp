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

int cnt[7], total;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for1(1, 7) {
        cin >> cnt[i];
    }
    total += cnt[6]; // 6칸은 그대로 사용됨.

    total += cnt[5]; // 5칸은 1칸짜리 11개가 더 사용될 수 있음.
    cnt[1] -= min(11 * cnt[5], cnt[1]);

    total += cnt[4]; // 4칸은 2칸짜리 5개 or 남는칸들 1칸짜리로 사용할 수 있음.
    while (cnt[4]--) {
        int mx = 20;
        for (int i = 0; i < 5 && cnt[2] > 0; i++) {
            cnt[2] -= 1;
            mx -= 4;
        }
        if (mx > 0) {
            cnt[1] -= min(cnt[1], mx);
        }
    }

    total += cnt[3] / 4; // 일단 3칸짜리로 꽉 채우는 걸 먼저 고려

    int left_three = cnt[3] % 4; // 1-> 3x3이 3개 남음.(반대임)
    if(left_three > 0) total++;

    int tmp;
    if (left_three == 1) {
        tmp = min(5, cnt[2]);
        cnt[2] -= tmp;
        cnt[1] -= min(27 - tmp * 4, cnt[1]);
    } else if (left_three == 2) {
        tmp = min(3, cnt[2]);
        cnt[2] -= tmp;
        cnt[1] -= min(18 - tmp * 4, cnt[1]);
    } else if (left_three == 3) {
        tmp = min(1, cnt[2]);
        cnt[2] -= tmp;
        cnt[1] -= min(9 - tmp * 4, cnt[1]);
    }

    total += cnt[2] / 9; // 일단 2칸짜리고 꽉채우는걸 먼저 고려
    if(cnt[2] % 9) {
        total++;
        int left_blank = 36 - (cnt[2] % 9) * 4;
        cnt[1] -= min(cnt[1], left_blank);
    }
    
    total += cnt[1] / 36; // 1은 최대 36개
    total += cnt[1] % 36 ? 1 : 0; // 나머지가 남아도 한판을 더써야 함.

    cout << total;
}