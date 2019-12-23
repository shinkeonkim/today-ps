#include <iostream>
using namespace std;
int N, E, K, cnt;
int ar[110][110];
int d[55];
bool check;
int main()
{
    cin >> N >> E;
    for (int y = 1; y <= E; y++)
    {
        cin >> K;
        check = false;
        for (int x = 0; x < K; x++)
        {
            cin >> d[x];
            if(d[x] == 1) check= true;
        }
        if(check)
        {
            cnt++;
            for(int x=0; x<K; x++)
            {
                ar[d[x]][cnt] = 1;
            }
        }
        else
        {
            for(int x1 = 0; x1<K; x1++)
            {
                for(int x2 = x1+1; x2<K; x2++)
                {
                    for(int song = 1; song<=cnt; song++)
                    {
                        if(ar[d[x1]][song] != ar[d[x2]][song]) ar[d[x1]][song] = ar[d[x2]][song] = 1;
                    }

                }
            }
        }
    }
    for(int y=1; y<=N; y++)
    {
        int c = 0;
        for(int x=1; x<=cnt; x++) c+=ar[y][x];
        if(c==cnt) cout<<y<<endl;
    }
}