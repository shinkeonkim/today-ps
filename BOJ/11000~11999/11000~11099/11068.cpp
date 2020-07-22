#include <iostream>
#include <vector>
using namespace std;

bool f(int num) {    
    if(num <10) return true;    
    for(int b = 2; b<=64; b++) {
        vector <int> V;
        bool check = true;
        int N = num;
        if(N == 0) return true;
        while(N>0) {
            V.push_back(N%b);
            N/=b;
        }
        for(int x=0; x<V.size()/2; x++) {
            if(V[x] != V[V.size()-x-1]) {
                check = false;
            }
        }
        if(check) return true;
    }
    return false;
}


int main() {
    int T,input;

    cin >> T;
    for(int t = 0; t<T; t++) {
        cin >> input;
        if(f(input)) cout << 1;
        else cout << 0;
        cout<<"\n";
    }
}