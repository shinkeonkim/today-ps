#include <iostream>
using namespace std;
int x1, x2, y1, y2, ans;
int D[2200][2200];
int main()
{
    for (int t = 1; t <= 3; t++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int x = x1; x < x2; x++)
        {
            for (int y = y1; y < y2; y++)
            {
                D[x + 1000][y + 1000] = t;
            }
        }
    }
    for (int x = 0; x <= 2000; x++)
    {
        for (int y = 0; y <= 2000; y++)
        {
            if (D[x][y] == 1 || D[x][y] == 2)
                ans++;
        }
    }
    cout << ans;
}