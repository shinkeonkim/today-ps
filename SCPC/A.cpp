#include <iostream>
#include <algorithm>
#include <vector>

#define for1(s,n) for(int i = s; i < n; i++)
#define for1j(s,n) for(int j = s; j < n; j++)
#define foreach(k) for(auto i : k)
#define foreachj(k) for(auto j : k)
#define pb(a) push_back(a)
#define sz(a) a.size()

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector <int> iv1;
typedef vector <vector<int>> iv2;
typedef vector <ll> llv1;
typedef unsigned int uint;
typedef vector <ull> ullv1;
typedef vector <vector <ull>> ullv2;

ll Answer;
ll N, K;
ll ar[220000];
ll ar2[220000];

int main(int argc, char** argv)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int T, test_case;

	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{
		Answer = 0;
        cin >> N >> K;
        for1(0, N) {
            cin >> ar[i];
        }
        for1(0, N) {
            cin >> ar2[i];
        }
        sort(ar, ar+N);
        sort(ar2,ar2+N);

        for1(0, K) {
            Answer = max(Answer, ar[i] + ar2[K-i-1]);
        }

		// Print the answer to standard output(screen).
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}