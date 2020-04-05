#include <iostream>
#include <string>
using namespace std;

int tc;
string a;
int D[110]; //open >0 close <0
int current;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> tc;
    for(int t =1; t<=tc; t++) {
        cin >> a;
        int L = a.length();
        current = 0;
        for(int x =0; x<=L; x++)  D[x] = 0;

        for(int x =0; x<L; x++) {
            int num = a[x] - 48;
            if(num > current) {
                D[x] = current - num;
                current = num;
            }
            else if(num < current){
                D[x] = current - num;
                current = num;
            }
        }
        cout << "Case #"<<t<<": ";
        for(int x=0; x<L; x++) {
            if(D[x] <0) {
                D[x]*=-1;
                for(int y=0; y<D[x]; y++) cout<<"(";
            }
            else {
                for(int y=0;y<D[x]; y++) cout<<")";
            }
            cout<<a[x];
        }

        if(current <0) {
            current*=-1;
            for(int y=0; y<current; y++) cout<<"(";
        }
        else {
            for(int y=0;y<current; y++) cout<<")";
        }
        cout<<"\n";

    }
}