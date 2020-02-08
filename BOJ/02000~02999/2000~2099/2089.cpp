#include <iostream>
#include <vector>
using namespace std;

int N;

// https://en.wikipedia.org/wiki/Negative_base#C++ 참고
auto to_negabinary(int value)
{
    vector <int> result;
    while (value != 0)
    {
        auto div_result = div(value, -2);

        if (div_result.rem < 0)
            value = div_result.quot + 1;
        else
            value = div_result.quot;
        
        result.push_back(div_result.rem != 0);
    }

    return result;
}

int main() {
    cin >> N;
    if(N==0) {
        cout<<0;
        return 0;
    }
    auto ret = to_negabinary(N);
    bool check = false;
    for(int x = ret.size()-1; x>-1; x--) {
        if(ret[x] == 1) {
            check = true;
        }
        if(check) {
            cout << ret[x];
        }
    }
}