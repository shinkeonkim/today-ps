#include <iostream>
using namespace std;
int N, M;
int card[110][2];
int status[110];
int kk[110];
int main()
{
    cin >> N >> M;
    for (int x = 0; x < N; x++)
    {
        cin >> card[x][0] >> card[x][1];
        status[x] = 0;
    }
    for (int x = 0; x < M; x++)
        cin >> kk[x];

    for (int x = 0; x < M; x++)
    {
        for (int y = 0; y < N; y++)
        {
            if (kk[x] > card[y][status[y]])
            {
                status[y] = 1 - status[y];
            }
        }
    }
    int S = 0;
    for (int x = 0; x < N; x++)
    {
        S += card[x][status[x]];
    }
    cout << S;
}