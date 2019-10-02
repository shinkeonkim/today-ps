#include <iostream>
using namespace std;
int main()
{
    int T, N, M, Mx, Pos, input;
    int vote[11];
    cin >> T;
    while (T--)
    {
        for (int j = 0; j < 10; j++)
            vote[j] = 0;
        cin >> N >> M;
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> input;
                vote[j]+=input;
            }
        }
        Mx = -1;
        Pos = 0;
        for (int i = 0; i < N; i++)
        {
            if (vote[i] > Mx)
            {
                Mx = vote[i];
                Pos = i;
            }
        }
        cout << Pos + 1 << "\n";
    }
}