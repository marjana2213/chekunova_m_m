#include <iostream>
 
int main() {
    int t = 0;
    int p = 0;
    int q = 0;
    int c = 0;
    std::cin >> t;
    while (t--) {
        std::cin >> p >> q;
        if (q-p >= 2) {
            c++;
        }
    }
    std::cout << c;  
}
