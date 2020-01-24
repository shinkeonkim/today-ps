#include <iostream>
#include <queue>
#define Mx 123456789
using namespace std;


struct st {
    int a,b,c,w;
};

int N;
int a,b,c;
int D3[110][110][110];
int D2[110][110];
int case3[10][3] = {{9,3,1},{9,1,3},{3,1,9},{3,9,1},{1,3,9},{1,9,3}};
queue <st> Q;

int main() {
    cin >> N;
    if(N == 1) {
        cin >> a;
        cout << a/9 + (a%9 == 0 ?0:1);
    }
    else if(N==2) {
        cin >> a >> b;
        for(int x=0; x<=a; x++)
            for(int y=0; y<=b; y++) D2[x][y] = Mx;

        D2[a][b] = 0;
        Q.push({a,b,0,0});
        while(!Q.empty()) {
            st Z = Q.front();
            Q.pop();
            // cout<<Z.a<<" "<<Z.b<<"\n";

            int nextA = max(0,Z.a-9);
            int nextB = max(0,Z.b-3);
            if(D2[nextA][nextB] > Z.w +1) {
                D2[nextA][nextB] = Z.w +1;
                Q.push({nextA,nextB,0,Z.w+1});
            }
            nextA = max(0,Z.a-3);
            nextB = max(0,Z.b-9);
            if(D2[nextA][nextB] > Z.w +1) {
                D2[nextA][nextB] = Z.w +1;
                Q.push({nextA,nextB,0,Z.w+1});
            }
        }
        cout<<D2[0][0];
    }
    else {
        cin >> a >> b >> c;

        for(int x=0; x<=a; x++)
            for(int y=0; y<=b; y++)
                for(int z = 0; z<=c; z++) D3[x][y][z] = Mx;

        D3[a][b][c] = 0;
        Q.push({a,b,c,0});
        while(!Q.empty()) {
            st Z = Q.front();
            Q.pop();
            // cout<<Z.a<<" "<<Z.b<<"\n";

            for(int d = 0; d<6; d++) {
                int nextA = max(0,Z.a-case3[d][0]);
                int nextB = max(0,Z.b-case3[d][1]);
                int nextC = max(0,Z.c-case3[d][2]);

                if(D3[nextA][nextB][nextC] > Z.w +1) {
                    D3[nextA][nextB][nextC] = Z.w +1;
                    Q.push({nextA,nextB,nextC,Z.w+1});
                }
            } 
        }
        cout<<D3[0][0][0];
    }
}