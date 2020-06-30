#include <iostream>
#define MOD 1000000000ull

using namespace std;
int N;
unsigned long long int ar[110][20][2200];
unsigned long long int Sum;
int main()
{
	cin >> N;
	for(int x=1; x<=9; x++) ar[1][x][(1<<x)]=1;
	for(int x=2; x<=N; x++)
	{
		for(int y=0; y<=9; y++)
		{
            for(int z = 0; z<=1023; z++) {
                if(y>0)
                {
                    ar[x][y-1][(z | (1<<(y-1)))] += ar[x-1][y][z];
                    ar[x][y-1][(z | (1<<(y-1)))] %= MOD;
                } 
                if(y+1<10)
                {
                    ar[x][y+1][(z | (1<<(y+1)))] += ar[x-1][y][z];
                    ar[x][y+1][(z | (1<<(y+1)))] %= MOD;
                }

            }
		}
	}
	for(int x=0; x<=9; x++)
	{
		Sum+=ar[N][x][1023];
		Sum%=MOD;
	}

	cout<<Sum;
}