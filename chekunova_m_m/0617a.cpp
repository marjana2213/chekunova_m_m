#include <iostream>

int main() {
    int x = 0;
    int ch = 0;
    std::cin >> x;
    ch = x / 5;
    if (x % 5 != 0) {
        ch += 1;
    }
    std::cout << ch;
}
