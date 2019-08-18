#include <iostream>
using namespace std;
long long M, ar[11000], S;
int N, s = 0, e = 1, answer = 0;
int main()
{
    cin >> N >> M;
    for (int x = 0; x < N; x++)
    {
        cin >> ar[x];
    }
    S = ar[0];
    while (s <= e && s < N && e < N+1)
    {
        if (S == M)
        {
            answer++;
            S -= ar[s];
            s++;
        }
        else if (S < M)
        {
            S += ar[e];
            e++;
        }
        else if (S > M)
        {
            S -= ar[s];
            s++;
        }
    }
    cout << answer;
}