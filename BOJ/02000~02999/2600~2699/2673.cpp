#include <iostream>
using namespace std;
int N, A, B, ar[220][220], DP[220][220],M;
int main()
{
    cin >> N;
    for (int x = 0; x < N; x++)
    {
        cin >> A >> B;
        ar[A-1][B-1] = ar[B-1][A-1] = 1;
    }
    for (int x = 200; x > -1; x--)
    {
        for (int y = x + 1; y <= 200; y++)
        {
            for (int z = x; z < y; z++)
            {
                A = DP[x%100][z%100] + DP[(z + 1)%100][(y - 1)%100] + ar[x%100][y%100];
                if (A > DP[x][y])
                    DP[x][y] = A;
            }
        }
    }
    for(int x=0; x<100; x++)
    {
        for(int y=0; y<100; y++)
        {
            if(DP[x][y] > M)
            {
                M=DP[x][y];
            }
        }
    }
    cout<<M;
}
