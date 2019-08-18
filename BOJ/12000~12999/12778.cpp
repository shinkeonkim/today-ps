#include <iostream>
using namespace std;
int T,K;
char s,c[550];
int n[550];
int main()
{
    cin>>T;
    for(int t=0; t<T; t++)
    {
        cin>>K>>s;
        if(s=='C')
        {
            for(int x=0; x<K; x++) cin>>c[x];
            for(int x=0; x<K; x++)
            {
                cout<<(int)(c[x]-'A'+1)<<" ";
            }
        }
        else
        {
            for(int x=0; x<K; x++) cin>>n[x];
            for(int x=0; x<K; x++)
            {
                cout<<(char)(n[x]+'A'-1)<<" ";
            }
        }
        cout<<endl;
    }
}