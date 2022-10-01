#include <iostream>
#include <array>
 
int main() {
    int i = 0;
    int j = 0;
    int t = 0;
    int l = 0;
    int n = 0;
    int x = 0;
    std::array<int, 500> a;
    std::cin >> t;
    for (i = 1; i <= t; i++) {
        std::cin >> n >> x;
        for (j = 0; j < n; j++) {
            std::cin >> l;
            a[l]=i;
        }
        for (j = 1; j < 500; j++) {
            if (a[j] != i) {
                if (x > 0) {
                    a[j] = i; x--;
                } else {
                    break;
                }
            }
        }
        std::cout << j-1 << "\n";
    }
}
