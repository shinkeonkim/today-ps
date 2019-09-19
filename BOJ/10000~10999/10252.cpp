#include <iostream>
using namespace std;

void solution(int Y, int X) {
    if(Y%2 == 0) {
        for(int y = 0; y<Y; y++) {
            if(y%2==0) {
                for(int x=0; x<X; x++) {
                    cout << "(" <<y<<","<<x<<")\n";
                }
            }
            else {
                for(int x= X-1; x>-1; x--) {
                    cout << "(" <<y<<","<<x<<")\n";
                }
            }
        }
        return ;
    }

    if(X%2 == 0) {
        for(int x = 0; x<X; x++) {
            if(x%2==0) {
                for(int y=0; y<Y; y++) {
                    cout << "(" <<y<<","<<x<<")\n";
                }
            }
            else {
                for(int y= Y-1; y>-1; y--) {
                    cout << "(" <<y<<","<<x<<")\n";
                }
            }
        }

        return ;
    }

    for(int x=0; x<X; x++) {
        cout << "(0"<<","<<x<<")\n";
    }
    for(int x=X-1; x>-1; x--) {
        if((X-1-x) %2 == 0) {
            for(int y=1; y<Y; y++) {
                cout << "(" <<y<<","<<x<<")\n";
            }
        }
        else {
            for(int y=Y-1; y>0; y--) {
                cout << "(" <<y<<","<<x<<")\n";
            }
        }
    }

}

int main() {
    ios_base::sync_with_stdio(true);
    cin.tie(0);
    cout.tie(0);
    int T,m,n;
    cin >> T;
    for(int t = 0; t <T; t++) {
        cin >>m>>n;
        cout << 1 << "\n";
        solution(m,n);
    }
}