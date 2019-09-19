#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> plus_number;
vector <int> minus_number;
int main() {
    int n,input,result = -123456789;
    cin >> n;
    for(int i = 0; i <n; i++) {
        cin >> input;
        if(input >=0) {
            plus_number.push_back(input);
        }
        else {
            minus_number.push_back(input);
        }
    }

    sort(plus_number.begin(),plus_number.end());
    sort(minus_number.begin(),minus_number.end());

    // 양수 2개 조합
    if(plus_number.size() >=2) {
        if(plus_number[plus_number.size()-1] * plus_number[plus_number.size()-2] > result) {
            result = plus_number[plus_number.size()-1] * plus_number[plus_number.size()-2];
        }
    }

    // 음수 2개 조합
    if(minus_number.size() >=2) {
        if(minus_number[minus_number.size()-1] * minus_number[minus_number.size()-2] > result) {
            result = minus_number[minus_number.size()-1] * minus_number[minus_number.size()-2];
        }
    }
    // 양수 3개 조합
    if(plus_number.size() >=3) {
        if(plus_number[plus_number.size()-1] * plus_number[plus_number.size()-2] * plus_number[plus_number.size()-3]> result) {
            result = plus_number[plus_number.size()-1] * plus_number[plus_number.size()-2] * plus_number[plus_number.size()-3];
        }
    }
    // 양수 1개, 음수 2개 조합
    if(plus_number.size()>0 && minus_number.size()>=2) {
        if(plus_number[plus_number.size()-1] * minus_number[minus_number.size()-1] * minus_number[minus_number.size()-2] >result) {
            result = plus_number[plus_number.size()-1] * minus_number[minus_number.size()-1] * minus_number[minus_number.size()-2];
        }
    }
    cout <<result;
}