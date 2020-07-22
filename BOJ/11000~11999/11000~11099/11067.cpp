#include <iostream>
#include <algorithm>
using namespace std;
struct st{
    int X,Y;
};

int T,N,M,a;
st caffe[110000];
int x_caffe[110000];

bool compare1(st a, st b);
bool compare2(st a, st b);

int main() {
    ios_base::sync_with_stdio(true);
    cin.tie(0);
    cout.tie(0);

    cin >> T;
    while(T--) {
        cin >> N;
        for(int x=0; x<=100000; x++) x_caffe[x] = 0;

        for(int x=0; x<N; x++) {
            cin >> caffe[x].X >>caffe[x].Y;
            x_caffe[caffe[x].X]++;
        } 

        sort(caffe,caffe+N,compare1);

        int current_caffe = 0;
        int current_x=0;
        int prev_y=0;
        while(current_caffe< N)
        {
            if(x_caffe[current_x] > 1) {
                if(prev_y != caffe[current_caffe].Y) {
                    sort(caffe+current_caffe,caffe+current_caffe+x_caffe[current_x],compare2);
                }
            }
            current_caffe+=x_caffe[current_x];
            current_x = caffe[current_caffe].X;
            prev_y = caffe[current_caffe-1].Y;
        }
        cin>>M;
        while(M--) {
            cin>>a;
            cout<<caffe[a-1].X<<" "<<caffe[a-1].Y<<"\n";
        }
    }
}

bool compare1(st a, st b) {
    if(a.X < b.X) {
        return true;
    }
    if(a.X == b.X) {
        if(a.Y < b.Y) return true;
    }
    return false;
}
bool compare2(st a, st b) {
    if(a.Y > b.Y) {
        return true;
    }
    return false;
}
