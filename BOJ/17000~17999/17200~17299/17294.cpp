// 문제 번호: 17294 문제 이름: 귀여운 수~ε٩(๑> ₃ <)۶з
// 문제 최초 시도: 2019_06_27
// 문제 풀이 완료: 2019_06_27
// 이 코드의 접근법: 구현

#include <iostream>
#include <string>
using namespace std;

string s;
int k;
bool answer = true;

int main() 
{
    cin >> s;
    if(s.length() != 1)
    {
        k = s[1] - s[0];
        for(int i = 1; i < s.length()-1; i ++) {
            if(k != s[i+1]-s[i]) {
                answer = false;
            }
        }
    }
    
    if(answer) {
        cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
    }
    else {
        cout << "흥칫뿡!! <(￣ ﹌ ￣)>";
    }
}