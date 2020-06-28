#include <iostream>
#include <string>
#include <map>
using namespace std;
typedef long long ll;

int T;
int N;
string s;
int cnt[4];

void add(int* cnt, char x) {
	if(x=='A') cnt[0]++;
	if(x=='T') cnt[1]++;
	if(x=='G') cnt[2]++;
	if(x=='C') cnt[3]++;
}

void sub(int* cnt, char x) {
	if(x=='A') cnt[0]--;
	if(x=='T') cnt[1]--;
	if(x=='G') cnt[2]--;
	if(x=='C') cnt[3]--;
}

int hash_num(int* cnt) {
	int ret = 0;
	for(int x=0; x<4; x++) {
		ret*=600;
		ret+=cnt[x];
	}
	return ret;
}

int main() {
	cin >> T;
	while(T--) {
		for(int x=0;x<4; x++) cnt[x]=0;
		cin >> N >> s;
		if(N>s.length()) {
			cout << 0;
			continue;
		}
		map<ll,int> num_cnt;
		int answer = 0;
		for(int x=0; x<N; x++) {
			add(cnt,s[x]);
		}
		ll K = hash_num(cnt);
		if(num_cnt.find(K) !=num_cnt.end()) {
			num_cnt[K]++;	
		}
		else {
			num_cnt[K]=1;
		}
		for(int x=0; x<=s.length()-N; x++) {
			sub(cnt,s[x]);
			add(cnt,s[x+N]);
			ll K = hash_num(cnt);
			if(num_cnt.find(K) !=num_cnt.end()) {
				num_cnt[K]++;	
			}
			else {
				num_cnt[K]=1;
			}
		}
		
		for(auto it = num_cnt.begin(); it!=num_cnt.end(); it++) {
			if(answer < it->second) {
				answer = it->second;
			}
		}
		cout<<answer<<"\n";
	}
}