#include <iostream>
using namespace std;
int K, N, M, answer = 987654321;
int a, b, ma = 1100, mb = 1100;
int main()
{
    cin >> N >> M;
    for (int x = 0; x < M; x++)
    {
        cin >> a >> b;
        if (a < ma)
            ma = a;
        if (b < mb)
            mb = b;
    }
    if(N%6 > 0)
    {
        K=ma*((N/6)+1);
        if (K < answer)
        answer = K;
    }

    K = ma * (N / 6) + mb * (N % 6);
    if (K < answer)
        answer = K;

    K = mb * N;
    if (K < answer)
        answer = K;
    cout << answer;
}