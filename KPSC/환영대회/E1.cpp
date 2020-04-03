#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int N,ans;
int ar[110000];
int cnt[11];
int cnt22[11];

set<int> S;

int main() {
    cin >> N;
    for(int x=0; x<N; x++) cin >> ar[x];   
    for(int x=0; x<N; x++) {
        cnt[ar[x]]++;
        
        S.clear();

        for(int y=1; y<=10; y++) {
            if(cnt[y] != 0) {
                S.insert(cnt[y]);
            }
        }
        if(S.size() == 1) {
            if(*S.begin() == 1) {
                if(ans < x+1) {
                    ans = x+1;
                    cout<<"11";
                }
            }
        }

        if(S.size() == 2) {
            auto iter = S.begin();
            int K1 = *(iter);
            iter++;
            int K2 = *(iter);
            int cnt1=0;
            int cnt2=0;


            for(int y=1; y<=10; y++) {
                if(cnt[y] == K1) cnt1++;
                if(cnt[y] == K2) cnt2++;
            }

            if(cnt1 == 1 || cnt2 == 1) {
                for(int z=1; z<=10; z++) cnt22[z] = cnt[z]; 

                if(cnt1 == 1) {
                    for(int z=1; z<=10; z++) {
                        if(cnt22[z] >= K2) {
                            cnt22[z]-=K2;
                        }
                    }

                    bool chk = true;
                    int c = 0;
                    for(int z=1; z<=10; z++) {
                        if(cnt22[z] < 0 || cnt22[z] > 1) {
                            chk = false;
                        }
                        if(cnt22[z] == 1) c++;
                    }
                    if(chk && c== 1) {
                        ans = x+1;
                        cout<<"*";
                    }
                    
                }

                for(int z=1; z<=10; z++) cnt22[z] = cnt[z]; 

                if(cnt2 == 1) {
                    for(int z=1; z<=10; z++) {
                        if(cnt22[z] >= K1 )cnt22[z]-=K1;
                    }
                    bool chk = true;
                    int c = 0;
                    for(int z=1; z<=10; z++) {
                        if(cnt22[z] < 0 || cnt22[z] > 1) {
                            chk = false;
                        }
                        if(cnt22[z] == 1) c++;
                    }
                    if(chk && c== 1) {
                        ans = x+1;
                        cout<<"&";
                    }
                }

                
            }
        }
    }
    cout<<ans;
}