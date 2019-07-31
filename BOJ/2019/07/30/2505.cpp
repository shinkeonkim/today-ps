#include <iostream>
#include <queue>
#include <utility>
using namespace std;
int N,ar[11000],D[11000],which[11000],tmp,cnt;
queue <pair<int , int> > Q;

int main()
{
    cin>>N;
    for(int x=1; x<=N; x++)
    {
        cin>>D[x];
        ar[x]=D[x];
        which[ar[x]] = x;
    }

    for(int x=1; x<=N; x++)
    {
        if(which[x] != x)
        {
            int a = x;
            int b = which[x];

            if(a>b)
            {
                tmp = a;
                a = b;
                b = tmp;
            }
            Q.push({a,b});
            cnt++;
            while(a<b)
            {
                which[ar[a]] = b;
                which[ar[b]] = a;

                tmp = ar[a];
                ar[a] = ar[b];
                ar[b] = tmp;


                a++;
                b--;
            }
        }

    }

    if(Q.size() <= 2)
    {
        while(!Q.empty())
        {
            cout<<Q.front().first <<" "<<Q.front().second <<endl;
            Q.pop();
        }    
        for(int x = cnt; x<2; x++)
        {
            cout<<"1 1"<<endl;
        }
        return 0;
    }

    while(!Q.empty())
    {
        Q.pop();
    }

    cnt = 0;
    for(int x=1; x<=N; x++)
    {
        ar[x]=D[x];
        which[ar[x]] = x;
    }

    for(int x=N; x>=1; x--)
    {
        if(which[x] != x)
        {
            int a = x;
            int b = which[x];

            if(a>b)
            {
                tmp = a;
                a = b;
                b = tmp;
            }
            Q.push({a,b});
            cnt++;
            while(a<b)
            {
                which[ar[a]] = b;
                which[ar[b]] = a;

                tmp = ar[a];
                ar[a] = ar[b];
                ar[b] = tmp;


                a++;
                b--;
            }
        }

    }
    if(Q.size() <= 2)
    {
        while(!Q.empty())
        {
            cout<<Q.front().first <<" "<<Q.front().second <<endl;
            Q.pop();
        }    
        for(int x = cnt; x<2; x++)
        {
            cout<<"1 1"<<endl;
        }
        return 0;
    }
}