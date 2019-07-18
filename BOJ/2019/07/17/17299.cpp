#include <iostream>
#include <stack>
#include <utility>
using namespace std;

int N, x, k;
int ar[1100000];
int count[1100000];
int D[1100000];
stack<pair<int, int>> stk;

int main()
{
    cin >> N;
    for (x = 0; x < 1000001; x++)
        D[x] = -1;
    for (x = 0; x < N; x++)
    {
        cin >> ar[x];
        count[ar[x]]++;
    }
    for (x = 0; x < N; x++)
    {
        while (!stk.empty() && count[ar[x]] > stk.top().second)
        {
            D[stk.top().first] = ar[x];
            stk.pop();
        }
        stk.push(make_pair(x, count[ar[x]]));
    }

    for (x = 0; x < N; x++)
    {
        cout << D[x] << " ";
    }
}