#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int a;
    srand(time(0));
    for(int x=0; x<rand()*100; x++) a = rand() & 1;
    if(a)
    {
        cout<<"Yonsei";
    }
    else cout<<"Korea";
}