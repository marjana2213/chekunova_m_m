#include <iostream>

int main() {
    int t = 0;
    int n = 0;
    int a  = 0;
    std::cin >> t;
    while (t--) {
        bool f = 0;
        int ka = -1;
        int ka2 = -1;
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            std::cin >> a;
            if (a == 1 && f == 0) {
                ka += 1;
            }
            if (a == 0) {
                f = 1;
                ka2 = -1;
            }
            if (f == 1 && a == 1) {
                ka2 += 1;
            }
        }
        if (ka2 == -1) {
            ka2 = 0;
        }
        std::cout << n - 1 - ka - ka2 << '\n';
    }
}
