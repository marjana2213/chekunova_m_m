#include <iostream>
 
int main() {
    int n = 0;
    int d = 0;
    int a = 0;
    int b = 0;
    int sh = 0;
    std::cin >> n >> d;
    std::cin >> a;
    for (int i = 1; i < n; i++) {
        std::cin >> b;
        if (a >= b) {
            int temp = ((a - b) / d) + 1;
            b += d * temp;
            sh += temp;
        }
        a = b;
    }
    std::cout << sh;    
}
