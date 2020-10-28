#include <iostream>
using namespace std;
int minus_dp[220000];
int n,w,L;
int weight_sum = 0;    
int time = 1;
int current_car;
int result=0;
int input[1100];

int main() {
    

    cin >> n >> w>> L;
    for(int x=0; x<n; x++) cin >> input[x];
    
    //DP 초기화
    weight_sum = input[0];
    minus_dp[time+w] = input[0];
    current_car = 1;
    
    for(time = 2; time<=110000; time++) {
        weight_sum-= minus_dp[time];
        // cout <<time <<" "<< weight_sum <<endl;
        
        if(current_car <= n && weight_sum + input[current_car] <= L) {
            weight_sum += input[current_car];
            minus_dp[time+w] += input[current_car];
            current_car++;
        }

        if(weight_sum == 0) {
            result = time;
            break;
        }
    } 

    cout<<result;

}