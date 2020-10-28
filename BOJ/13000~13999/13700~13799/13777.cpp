#include <iostream>
using namespace std;
int n;
int main() {
    cin >> n;
    while(n != 0) {
        int s = 1, e = 50;
        while(s<=e) {
            int mid = (s+e)/2;
            cout << mid << " ";
            if(mid > n) {
                e = mid -1;
            }
            else if(mid < n){
                s = mid + 1;
            }
            else {
                break;
            }
        }
        cout <<"\n";
        cin >> n;
    }
}