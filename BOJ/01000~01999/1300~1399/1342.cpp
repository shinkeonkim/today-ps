#include <bits/stdc++.h>

using namespace std;

string s;
int ans;

bool is_lucky_string() {
  char last = 0;
  for(auto i: s) {
    if(i == last) return false;
    last = i;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  
  cin >> s;

  sort(s.begin(), s.end());

  do {
    if(is_lucky_string()) ans++;
  }
  while(next_permutation(s.begin(), s.end()));

  cout << ans;
}