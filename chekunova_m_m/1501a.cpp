#include <iostream>
#include <array>
#include <algorithm>

int main() {
    int t = 0;
    int n = 0;
    std::cin >> t;
    while (t--) {
        std::array <int, 100> a1;
        std::array <int, 100> b1;
        std::array <int, 100> c;
        int time = 0;
        std::cin >> n;
        a1[0] = 0;
        b1[0] = 0;
        for (int i = 1; i <= n; i++) {
            std::cin >> a1[i] >> b1[i];           
        }
        c[0] = 0;
        for (int i = 1; i <= n; i++) {
            std::cin >> c[i];
        }
        for (int i = 0; i < n; i++) {
            time = std::max(time + (b1[i] - a1[i] + 1) / 2, b1[i]);
            time += a1[i + 1] - b1[i] + c[i + 1];
        }
        std::cout << time << '\n';
    }
}
