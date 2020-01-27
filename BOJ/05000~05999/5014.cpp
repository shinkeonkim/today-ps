#include <iostream>
#include <queue>
#define Mx 123456789
using namespace std;
struct st{
    int stair,cost;
};

int F,S,G,U,D;
queue <st> Q;
int dp[1100000];

int main() {
    cin >> F >> S >> G >> U >> D;
    for(int x= 1; x<=F; x++) dp[x] = Mx;
    Q.push({S,0});
    dp[S] = 0;
    while(!Q.empty()) {
        st front = Q.front();
        Q.pop();
        if(front.stair + U <=F && dp[front.stair + U] > front.cost + 1) {
            dp[front.stair + U] = front.cost + 1;
            Q.push({front.stair+U,front.cost+1});
        }
        if(front.stair - D >0 && dp[front.stair - D] > front.cost + 1) {
            dp[front.stair - D] = front.cost + 1;
            Q.push({front.stair-D,front.cost+1});
        }
    }

    if(dp[G] == Mx) {
        cout<< "use the stairs";
    }
    else {
        cout<<dp[G];
    }
}