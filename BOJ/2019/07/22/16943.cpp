#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int A,B,Max=-1;
vector <int> V;
int main()
{
    cin>>A>>B;
    while (A>0)
    {
        V.push_back(A%10);
        A/=10;
    }
    sort(V.begin(),V.end());
    while(next_permutation(V.begin(),V.end()))
    {
        int k = 0;
        for(auto iter = V.begin(); iter != V.end(); iter++)
        {
            k*=10;
            k += (*iter);
        }
        if(Max < k && k <=B && V[0] !=0)
        {
            Max = k;
        }
    }
    cout<<Max;
}