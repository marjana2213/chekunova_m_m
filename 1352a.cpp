#include <iostream>
#include <cmath>
#include <array>
 
int main() {
    int a = 0;
    int k0 = 0;
    int ch = 0;
    int r = 0;
    int sl = 0;
    std::array<int, 5> m;
    std::cin >> a;
    for (int i = 0; i < a; i++) {
        k0 = 0;
        sl = 0;
        for (int y = 0; y < 5; y++) {
            m[y] = 0;
        }
        std::cin >> ch;
        while (ch > 0) {
            r = ch % 10;
            ch /= 10;
            if (r != 0) {
                m[k0] = r * pow(10,k0);
                sl += 1;    
            }
            k0 += 1;
        }
        std::cout << sl << "\n";
        for (int x = 4; x > -1; x--) {
            if (m[x] != 0) {
                std::cout << m[x] << " ";
            }
        }
        std::cout << "\n";
    }
}
