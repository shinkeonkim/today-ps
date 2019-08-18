#include <iostream>
using namespace std;
int N, M, S;
int ar[550][550];
int cnt, Max;
int main()
{
    cin >> N >> M;
    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < M; x++)
        {
            cin >> ar[y][x];
            int K = ar[y][x];
            while (K > 0)
            {
                if (K % 10 == 9)
                {
                    S++;
                }
                K /= 10;
            }
        }
    }

    for (int y = 0; y < N; y++)
    {
        cnt = 0;
        for (int x = 0; x < M; x++)
        {
            int K = ar[y][x];
            while (K > 0)
            {
                if (K % 10 == 9)
                {
                    cnt++;
                }
                K /= 10;
            }
        }
        if (cnt > Max)
            Max = cnt;
    }

    for (int x = 0; x < M; x++)
    {
        cnt = 0;
        for (int y = 0; y < N; y++)
        {
            int K = ar[y][x];
            while (K > 0)
            {
                if (K % 10 == 9)
                {
                    cnt++;
                }
                K /= 10;
            }
        }
        if (cnt > Max)
            Max = cnt;
    }

    cout << S - Max;
}