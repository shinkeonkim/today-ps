#include <string>
#include <vector>

using namespace std;

int ar[120000];

int f(int x)
{
  if(ar[x]) return ar[x];
  else if(x==1) return ar[x]=1;
  else if(x==2) return ar[x]=2;
  else return ar[x]=(f(x-1)+f(x-2))%1000000007;
}

int solution(int n) {
    int answer = f(n);
    return answer;
}