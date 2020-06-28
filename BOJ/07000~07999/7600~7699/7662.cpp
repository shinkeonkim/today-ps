#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;



int T,N;
string a;
int b;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> T;
    while(T--) {
        map <int,int> M;
        map <int,int> M2;
        priority_queue <int ,vector<int> , less<int>> MaxQ;
        priority_queue <int, vector<int>, greater<int>> MinQ;
        cin >> N;
        for(int x = 0; x<N; x++) {
            cin >> a >> b;
            if(a == "I") {
                MaxQ.push(b);
                MinQ.push(b);
            }
            else {
                while(M.find(MaxQ.top()) != M.end() && M[MaxQ.top()] > 0) {
                    M[MaxQ.top()]-=1;
                    MaxQ.pop();
                }
                while(M2.find(MinQ.top()) != M2.end() && M2[MinQ.top()] > 0) {
                    M2[MinQ.top()]-=1;
                    MinQ.pop();
                }
                if(b==1) {
                    if(MaxQ.size()>0) {
                        int k = MaxQ.top();
                        if(M2.find(k) != M2.end()) M2[k] +=1;
                        else M2[k]=1;
                        MaxQ.pop();
                    }
                }
                else {
                    if(MinQ.size()>0) {
                        int k = MinQ.top();
                        if(M.find(k) != M.end()) M[k] +=1;
                        else M[k]=1;
                        MinQ.pop();
                    }
                }
            }
        }
        while(M.find(MaxQ.top()) != M.end() && M[MaxQ.top()] > 0) {
            M[MaxQ.top()]-=1;
            MaxQ.pop();
            }
        while(M2.find(MinQ.top()) != M2.end() && M2[MinQ.top()] > 0) {
            M2[MinQ.top()]-=1;
            MinQ.pop();
        }
        if(MaxQ.size() > 0 && MinQ.size() > 0) {
            cout << MaxQ.top() << " " << MinQ.top() << "\n";
        }
        else {
            cout<<"EMPTY\n";
        }
    }
}