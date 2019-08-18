#include <iostream>
#include <algorithm>
using namespace std;
int N, m = 199999999;
int D[11][11];
int route[12];
int check[12];

void g()
{
    int S = 0;
    for (int x = 0; x < N; x++)
    {
        if(D[route[x]][route[x + 1]] == 0)
        {
            S=19999999;
            break;
        }
        else S += D[route[x]][route[x + 1]];
    }
    m = min(S, m);
}

void f(int K)
{
    if (K == N)
    {
        g();
    }
    else
    {
        for (int x = 1; x < N; x++)
        {
            if (check[x] == 0)
            {
                route[K] = x;
                check[x] = 1;
                f(K + 1);
                check[x] = 0;
            }
        }
    }
}

int main()
{
    cin >> N;
    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N; x++)
        {
            cin >> D[y][x];
        }
    }
    route[0] = 0;
    route[N] = 0;
    check[0] = 1;
    for (int x = 1; x < N; x++)
    {
        route[1] = x;
        check[x] = 1;
        f(2);
        check[x] = 0;
    }
    cout<<m;
}