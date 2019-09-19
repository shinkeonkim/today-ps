#include <iostream>
using namespace std;
int a, b, n, w, cnt;
int main()
{
    cin >> a >> b >> n >> w;
    for (int x = 1; x < n; x++)
    {
        if (a * x + b * (n - x) == w)
        {
            cnt++;
        }
    }
    if (cnt != 1)
    {
        cout << -1;
        return 0;
    }
    for (int x = 1; x < n; x++)
    {
        if (a * x + b * (n - x) == w)
        {
            cout << x << " " << n - x << endl;
            return 0;
        }
    }
}