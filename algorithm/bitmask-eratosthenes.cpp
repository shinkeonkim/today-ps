#include <iostream>
using namespace std;

#define MAX_N 10000
int n;
unsigned char sieve[(MAX_N+7)/8];

inline bool isPrime(int k) {
    return sieve[k>>3] & (1 << (k & 7));
}

inline bool setComposite(int k) {
    sieve[k >> 3] &= ~(1 << k & 7);
}

void eratosthenes() {
    memset(sieve, 255, sizeof(sieve));
    setComposite(0);
    setComposite(1);
    for(int i = 2; i*i<= n; i++) {
        if(isPrime(i)) {
            for(int j = i+i; j <=n; j+=i) {
                setComposite(j);
            }
        }
    }
}

int main() {
    cin >> n;
    eratosthenes();
}