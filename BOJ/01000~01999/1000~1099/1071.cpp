#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

priority_queue <int, vector<int>, greater<int>> Q;
queue <int> dump;
deque <int> answer;
queue <int> back;

int cnt[11000];
int total;

int N,a;
int current = -2;

int main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    cin >> N;
    for(int x = 0; x < N; x++) {
        cin >> a;
        if(cnt[a] == 0) {
            Q.push(a);
        }
        cnt[a]++;
    }

    while(!Q.empty() || !dump.empty()) {
        while(!Q.empty() && cnt[Q.top()] <= 0) {
            Q.pop();
        }
        while(!Q.empty() && current + 1 != Q.top()) {
            current = Q.top();
            answer.push_back(current);
            
            cnt[current]--;
            if(cnt[current] <= 0) Q.pop();
            
            while(!dump.empty()) {
                Q.push(dump.front());
                dump.pop();
            }
        }
        if(!Q.empty() && Q.size() > 1) {
            dump.push(Q.top());
            Q.pop();
        }
        else if(!Q.empty() && current + 1 == Q.top()) {
            while(answer.size() > 0 && answer.back() + 1 == Q.top()) {
                back.push(answer.back());
                answer.pop_back();
            }
            answer.push_back(Q.top());
            cnt[Q.top()]--;
            current = Q.top();
            if(cnt[Q.top()] <=0) Q.pop();
            while(!back.empty()) {
                if(cnt[back.front()] <= 0) {
                    Q.push(back.front());
                    cnt[back.front()]=0;
                }
                cnt[back.front()]++;
                back.pop();
            }
        }
    }

    while(!answer.empty()) {
        cout << answer.front() << " ";
        answer.pop_front();
    }
}