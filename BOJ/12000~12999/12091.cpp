#include <iostream>
#include <ctime>
#include <string>
using namespace std;
string ar[]={"Vaporeon","Jolteon","Flareon"};
long long k;
int main()
{
    for(int x=0; x<100000000; x++)
    {
        k+=x;
    }
    cout<<ar[(time(0)/60)%3];
}