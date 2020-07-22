#include <iostream>
using namespace std;
int T, H, W;
char ar[110][110];
bool check[110][110];
int dy[] = {0, 0, 1, -1};
int dx[] = {1, -1, 0, 0};

void DFS(int Y, int X)
{
    check[Y][X] = true;
    for (int d = 0; d < 4; d++)
    {
        if (0 > Y + dy[d] || Y + dy[d] >= H || 0 > X + dx[d] || X + dx[d] >= W)
            continue;
        if(ar[Y+dy[d]][X+dx[d]] == '#' && check[Y+dy[d]][X+dx[d]] == false)
        {
            DFS(Y+dy[d],X+dx[d]);
        }
    }
}

int main()
{
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        cin >> H >> W;
        int cnt = 0;
        for (int y = 0; y < H; y++)
        {
            for (int x = 0; x < W; x++)
            {
                cin >> ar[y][x];
                check[y][x] = false;
            }
        }

        for (int y = 0; y < H; y++)
        {
            for (int x = 0; x < W; x++)
            {
                if (ar[y][x] == '#' && check[y][x] == false)
                {
                    cnt++;
                    DFS(y, x);
                }
            }
        }

        cout << cnt << endl;
    }
}