#include <iostream>
using namespace std;
int K,N,cnt;
string a;
string b[1100];
int main()
{
    cin>>K>>N>>a;
    for(int x=0; x<N; x++)
    {
        cin>>b[x];
    }

    for(int x=0; x<N; x++)
    {
        cnt=0;
        for(int y=0; y<b[x].length(); y++)
        {
            if(cnt >= a.length()) break;
            if(a[cnt] == b[x][y]) cnt++;
        }
        if(cnt>=a.length()) cout<<"true\n";
        else cout<<"false\n";
    }

}