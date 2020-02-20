#include <iostream>
using namespace std;
int mo[110000];
int ar[110000];
int N,Q,input,sq,a,b,c;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;
    for(sq=1; sq*sq<=N; sq++) ; 
    for(int x=0;x<N; x++) {
        cin >> input;
        ar[x] = input % 2;
        mo[x/sq] += input%2; // mo[x]는 범위내 홀수개수임. 
    }
    // for(int x=0; x<6; x++) cout<<ar[x]<<" ";
    // cout<<"\n";
    // for(int x=0; x<3; x++) cout<<mo[x]<<" ";
    // cout<<"\n";
    cin >> Q;
    for(int q = 0; q<Q; q++) {
        cin >> a >> b >> c;
        b--; // 위치 조정
        if(a==1) {
            if(c%2 != ar[b]%2) {
                if(c%2==0) { // 원래 홀수
                    ar[b] = c%2;
                    mo[b/sq]--;
                }
                else { //원래 짝수
                    ar[b] = c%2;
                    mo[b/sq]++;
                }
            }
        }
        else if(a==2) {
            c--;
            int S = b/sq;
            int E = c/sq;
            int cnt = 0;
            for(int i = S; i<=E; i++) {
                // cout<<"mo"<<i<<" ";
                cnt+=mo[i];
            }
            for(int i=S*sq; i<b; i++) {
                cnt-=ar[i];
            }
            for(int i=(E+1)*sq -1; i>c; i--) {
                // cout<<"R"<<i<<" ";
                cnt-=ar[i];
            }
            cout<<(c-b+1)-cnt<<"\n";

        }
        else if(a==3) {
            c--;
            int S = b/sq;
            int E = c/sq;
            int cnt = 0;
            for(int i = S; i<=E; i++) {
                // cout<<"mo"<<i<<" ";
                cnt+=mo[i];
            }
            for(int i=S*sq; i<b; i++) {
                // cout<<"L"<<i<<" ";
                cnt-=ar[i];
            }
            for(int i=(E+1)*sq -1; i>c; i--) {
                // cout<<"R"<<i<<" ";
                cnt-=ar[i];
            }
            cout<<cnt<<"\n";
        }

    }

}