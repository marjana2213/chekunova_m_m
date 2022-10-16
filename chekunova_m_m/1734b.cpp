#include <iostream>

int main() {
    int n = 0;
    int t = 0;
    int k = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::cin >> n;
        for (int i = 1; i <= n; i++) {
            k = i - 2;
            if (k < 0) {
                std::cout << '1' << '\n';
            } else {
                std::cout << '1' << " ";
                for (int j = 0; j < k; j++) {
                    std::cout << '0' << " ";
                }
                std::cout << '1' << " ";
            std::cout << std::endl;
            }
        }
    }
}
