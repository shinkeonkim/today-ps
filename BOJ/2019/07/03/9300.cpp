#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;
int N;
double h,theta,k;
int main()
{
    cin>>N;
    for(int x=0; x<N; x++)
    {
        cin>>h>>theta;
        theta = (theta * M_PI)/180.0;
        k = (h*(1.0-tan(theta)))/tan(theta);
        if(k < 0) k = -k;
        printf("Case %d: %.5f\n",x+1,k);
    }
}


    
    