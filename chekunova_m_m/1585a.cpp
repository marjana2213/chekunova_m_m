#include <iostream>
#include <array>

int main() {
    int t = 0;
    int n = 0;
    std::cin >> t;
    while (t--) {
        int h = 1;
        std::array <int, 100> d;
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            std::cin >> d[i];
        }
        for (int i = 0; i < n - 1; i++) { 
            if (d[i] == d[i + 1] && d[i] == 0) {
                h = -1;
                break;
            }
            if (d[i + 1] == d[i] && d[i] == 1) {
                h += 5;
            } else if (d[i] == 1) {
                h += 1;
            }
        }
        if (d[n - 1] == 1 && h != -1) {
            h += 1;
        }
        std::cout << h << '\n';
    }
}
