#include <iostream>
#include <stack>
#include <utility>
using namespace std;

int N,x;
int ar[1100000];
int D[1100000];
stack<pair<int, int>> stk;

int main()
{
    cin >> N;
    for (x = 0; x < N; x++)
    {
        D[x] = -1;
        cin >> ar[x];
    }

    for (x = 0; x < N; x++)
    {
        while (!stk.empty() && ar[x] > stk.top().second)
        {
            D[stk.top().first] = ar[x];
            stk.pop();
        }
        stk.push(make_pair(x, ar[x]));
    }

    for (x = 0; x < N; x++)
    {
        cout << D[x] << " ";
    }
}