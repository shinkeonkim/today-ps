#include <iostream>
using namespace std;
int tc,n;
int ar[1100];
int ar2[1100];
int d[1100];
int d2[1100];

void f(int mid, int left, int right) {
    // cout << mid << " " << left << " " << right << "*\n";
    if(left > right) {
        return;
    }
    if(left == right) {
        cout << ar[mid] << " ";
        return;
    }


    int currnet_mid2 = d2[ar[mid]];
    // cout << "current mid2 = " << currnet_mid2 << "\n";
    int k = n;

    for(int x=left; x<currnet_mid2; x++) {
        if(d[ar2[x]] < k) {
            k = d[ar2[x]];
        }
    }
    if(k != n) f(k,left,currnet_mid2-1);

    k = n;
    for(int x = currnet_mid2+1; x<=right; x++) {
        if(d[ar2[x]] < k) {
            k = d[ar2[x]];
        }
    }
    if(k != n) f(k,currnet_mid2+1,right);

    cout << ar[mid] << " ";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> tc;
    while(tc--) {
        cin >> n;
        for(int x=0; x<n; x++) {
            cin >> ar[x];
            d[ar[x]] = x;        
        }
        for(int x=0; x<n; x++) {
            cin >> ar2[x];
            d2[ar2[x]] = x;
        }

        f(0,0,n-1); // 전위순회 현재, 중위탐색 왼쪽 오른쪽
        cout << "\n";
    }
}