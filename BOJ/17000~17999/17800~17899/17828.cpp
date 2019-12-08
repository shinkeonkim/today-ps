#include <iostream>
#include <vector>
using namespace std;
int N,X;
vector <char> V;
int main() {
    cin >> N >> X;
    if(X < N || X > N*26){
        cout<<"!";
        return 0;
    }
    for(int x = 0; x<N; x++) {
        int k = min(X-(N-x-1),26);
        V.push_back((char)(k+64));
        X-=k;
    }
    for(int x=V.size()-1; x>-1; x--) {
        cout<<V[x];
    }
}
