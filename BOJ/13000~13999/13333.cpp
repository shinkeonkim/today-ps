#include <iostream>
#include <algorithm>
using namespace std;

int N,ans,ar[1100];

int main() {
    cin >> N;
    for(int x=0; x<N; x++) cin>>ar[x];
    
    for(int k = 0; k <=10000; k++)
    {
        int small=0,big=0,eq = 0;
        for(int x=0; x<N; x++)
        {
            if(ar[x] > k) big++;
            if(ar[x] == k) eq++;
            if(ar[x] < k) small++;
        }     

        if(small + eq >= N-k && big + eq >=k)
        {
            cout<<k;
            return 0;
        }
    }
}