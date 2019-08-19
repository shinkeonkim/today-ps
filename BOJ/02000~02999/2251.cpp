#include <iostream>
#include <queue>
using namespace std;

struct st{
    int A,B,C;    
};

int A,B,C;
int D[220][220][220];
st Z,K;
queue <st> Q;

int main()
{
    cin>>A>>B>>C;
    Z.A=Z.B=0;
    Z.C=C;
    Q.push(Z);
    while(!Q.empty())
    {
        Z= Q.front();
        Q.pop();
        D[Z.A][Z.B][Z.C]=1;

        // A -> B
        K = Z;
        if(K.A > 0 && B-K.B >0)
        {
            int tmp = min(K.A,B-K.B);
            K.A = K.A - tmp;
            K.B = K.B + tmp;
            if(K.A >= 0 && K.B<=B)
            {
                if (D[K.A][K.B][K.C]==0)
                {
                    Q.push(K);
                }
            }
        }
        

        // A -> C
        K = Z;
        if(K.A > 0 && C-K.C >0)
        {
            int tmp = min(K.A,C-K.C);
            K.A = K.A - tmp;
            K.C = K.C + tmp;
            if(K.A >= 0 && K.C<=C)
            {
                if (D[K.A][K.B][K.C]==0)
                {
                    Q.push(K);
                }
            }
        }
        
        // B -> A
        K = Z;
        if(K.B > 0 && A-K.A >0)
        {
            int tmp = min(K.B,A-K.A);
            K.B = K.B - tmp;
            K.A = K.A + tmp;
            if(K.B >= 0 && K.A<=A)
            {
                if (D[K.A][K.B][K.C]==0)
                {
                    Q.push(K);
                }
            }
        }
        
        // B -> C
        K = Z;
        if(K.B > 0 && C-K.C >0)
        {
            int tmp = min(K.B,C-K.C);
            K.B = K.B - tmp;
            K.C = K.C + tmp;
            if(K.B >= 0 && K.C<=C)
            {
                if (D[K.A][K.B][K.C]==0)
                {
                    Q.push(K);
                }
            }
        }
        
        // C -> A
        K = Z;
        if(K.C > 0 && A-K.A >0)
        {
            int tmp = min(K.C,A-K.A);
            K.C = K.C - tmp;
            K.A = K.A + tmp;
            if(K.C >= 0 && K.A<=A)
            {
                if (D[K.A][K.B][K.C]==0)
                {
                    Q.push(K);
                }
            }
        }
        
        // C -> B
        K = Z;
        if(K.C > 0 && B-K.B >0)
        {
            int tmp = min(K.C,B-K.B);
            K.C = K.C - tmp;
            K.B = K.B + tmp;
            if(K.C >= 0 && K.B<=B)
            {
                if (D[K.A][K.B][K.C]==0)
                {
                    Q.push(K);
                }
            }
        }
    }
    for(int z=0; z<=C; z++)
    {
        for(int y=0; y<=B; y++)
        {
            if(D[0][y][z]==1)
            {
                cout<<z<<" ";
                break;
            }
        }
    }
}