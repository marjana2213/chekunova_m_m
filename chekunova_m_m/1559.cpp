#include <iostream>

int main() {
    int t = 0;
    int n = 0;
    int a = 0;
    int x = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::cin >> n;
        std::cin >> a;
        n--;
        for (int j = 0; j < n; j++) {
            std::cin >> x;
            a &= x;
        }
        std::cout << a << "\n";
    }
}
