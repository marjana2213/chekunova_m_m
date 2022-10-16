#include <iostream>
#include <algorithm>

int main() {
    int h = 0;
    int k = 0;
    int n = 0;
    int a = 0;
    int t = 100000000000;
    std::cin >> n >> k;
    for (int i = 0; i < n; i++) {
        std::cin >> a;
        if (k % a == 0) {
            h = k / a;
            t = std::min(t, h);
        }
    }
    std::cout << t;  
}
