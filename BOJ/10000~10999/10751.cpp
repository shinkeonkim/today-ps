#include <iostream>
#include <string>
using namespace std;
typedef long long ll;
int N;
string s;
ll cnt[3];
int main() {
	cin >> N >> s;
	for(int x=0; x<N; x++) {
		if(s[x]=='C') cnt[0]++;
		else if(s[x]=='O') cnt[1]+=cnt[0];
		else cnt[2]+=cnt[1];
	}
	cout<<cnt[2];
}