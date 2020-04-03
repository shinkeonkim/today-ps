#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct st{
    int A,B;
};

int N;
st ar[110000];

vector<st> aa;
vector<st> bb;


bool compare1(st a , st b) {
    if(a.B < b.B) return true;
    else if(a.B == b.B) {
        if(a.A < b.A) return true;
    }
    return false;
}

bool compare2(st a,st b) {
    if(a.A > b.A) return true;
    else if(a.B == b.B) {
        if(a.B > b.B) return true;
    }
    return false;
}


int main() {
    cin >> N;
    for(int x=0; x<N; x++) {
        cin >> ar[x].A >> ar[x].B;
    }


    for(int x=0; x<N; x++) {
        if(ar[x].A < ar[x].B) aa.push_back(ar[x]);
        if(ar[x].A > ar[x].B) bb.push_back(ar[x]);
    }

    sort(aa.begin(),aa.end(),compare1);
    sort(bb.begin(),bb.end(),compare2);


    for(auto i : aa) {
        cout<< i.A << i.B<<" ";
    }
    cout << "\n";
    for(auto i : bb) {
        cout<< i.A << i.B<<" ";
    }


}