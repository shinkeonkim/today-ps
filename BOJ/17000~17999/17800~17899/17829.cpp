#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N,input,answer;
int f(vector<int> v) {
    sort(v.begin(),v.end());
    return v[2];
}

int main() {
    cin >> N;
    vector< vector<int>> V(N);

    for(int y = 0; y<N;y++) {
        for(int x= 0; x<N; x++) {
            cin >> input;
            V[y].push_back(input);
        }
    }

    while(N>1) {
        vector<vector<int>> V2(N/2);
        for(int y= 0; y<N; y+=2) {
            for(int x = 0; x<N; x+=2) {
                vector<int> X;
                for(int y1 = 0; y1<2; y1++) 
                    for(int x1 = 0; x1<2; x1++) {
                        X.push_back(V[y+y1][x+x1]);
                        //cout<<V[y+y1][x+x1]<<" ";
                    }
                //cout<<endl;
                V2[y/2].push_back(f(X));
            }
        }
        V.swap(V2);
        N/=2;
    }
    cout<<V[0][0];
}