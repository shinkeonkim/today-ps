#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int a,N,M;
vector <int> v;
int main()
{
    cin>>N>>M;
    for(int x=0; x<N*M; x++)
    {
        cin>>a;
        if(a==1) v.push_back(x); 
    }

    cout<< abs(v[0]/M - v[1]/M) + abs(v[0]%M -v[1]%M);
}