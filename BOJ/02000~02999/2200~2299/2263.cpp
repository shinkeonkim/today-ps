#include <bits/stdc++.h>

using namespace std;

int N,a;
vector <int> in;
vector <int> post;

void f(int in_start, int in_end, int post_start, int post_end) {
    // cout <<"[" << in_start << in_end << post_start << post_end << "]";
    if(in_start > in_end || post_start > post_end) {
        return ;
    } 
    
    if(in_start == in_end) {
        cout << in[in_start] <<  " ";
        return;
    }
    int in_idx = -1;
    int middle_v = post[post_end];

    for(int x=in_start; x<=in_end; x++) {
        if(middle_v == in[x]) {
            in_idx = x;
        }
    }
    
    int in_count_left = in_idx - in_start;

    if(in_idx == -1) {
        return ;
    }

    cout << post[post_end] << " ";

    f(in_start, in_idx-1, post_start, post_start + in_count_left -1);
    f(in_idx+1, in_end, post_start + in_count_left, post_end-1);

}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> a;
        in.push_back(a);
    }    
    for(int i = 0; i < N; i++) {
        cin >> a;
        post.push_back(a);
    }    
    f(0,N-1, 0, N-1);

}