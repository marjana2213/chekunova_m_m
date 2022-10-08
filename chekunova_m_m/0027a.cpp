#include <iostream>
#include <array>

int main() {
    std::array<int, 4000> p;
    int x = 0;
    int y = 0;
    std::cin >> x;
    for (int i = 0; i < x; i++) {
        std::cin >> y;
        p[y] = 1;
    }
    for (int i = 1; i < 4000; i++) {
        if (p[i] != 1) {
            std::cout << i;
            break;
        }
    }
}
