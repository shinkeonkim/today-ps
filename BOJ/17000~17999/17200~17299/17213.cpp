#include <iostream>
#define ll long long 
using namespace std;
ll K, N;
ll ar[110][110];

ll f(ll n, ll k)
{
    if (ar[n][k])
        return ar[n][k];
    if (k > n || k < 0 || n < 0)
        return ar[n][k] = 0;
    if (n == k)
        return ar[n][k] = 1;
    if (k == 1)
        return ar[n][k] = n;

    return ar[n][k] = f(n - 1, k - 1) + f(n - 1, k);
}
int main()
{
    cin >> K >> N;
    if (N == 1)
        cout << 1;
    else
        cout << f(N - 1, K - 1);
}