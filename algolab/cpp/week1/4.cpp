#include <iostream>
int T,m,n;
int main() {
    std::cin >> T;
    while(T--) {
        std::cin >> m >> n;
        std::cout << (n*(n+1) - m*(m-1))/2 << "\n";
    }
}