#include <iostream>
using namespace std;
int N;
int a[330][330], b[330][330];
int cnt = 0;
int main()
{
    cin >> N;
    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N; x++)
        {
            cin >> a[y][x];
        }
    }
    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N; x++)
        {
            cin >> b[y][x];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            bool C = a[i][0] & b[0][j];
            for (int n = 1; n < N; n++)
            {
                C = C | (a[i][n] & b[n][j]);
            }
            if(C) cnt++;
        }
    }
    cout<<cnt;
}