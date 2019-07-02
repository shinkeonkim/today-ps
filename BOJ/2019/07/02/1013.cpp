#include <iostream>
#include <regex>
#include <string>
using namespace std;
int T;
string a;
int main()
{
    cin>>T;
    for(int x=0; x<T; x++)
    {
        cin>>a;
        if(regex_match(a,regex("(100+1+|01)+")))
        {
            cout<<"YES\n";
        }else cout<<"NO\n";
    }
}