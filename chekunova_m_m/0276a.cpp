#include <iostream>

int f(int x, int y, int k) {
    if (y > k) {
        x = x - (y - k);
    }
    return x;
}
 
int main() {
    int n = 0;
    int k = 0;
    int a = 0;
    int b = 0;
    int max = 0;
    std::cin >> n >> k;
    std::cin >> a >> b;
    max = f(a,b,k);
    for (int i = 1; i < n; i++) {
        std::cin >> a >> b;
        a = f(a,b,k);
        if (a > max) {
            max = a;
        }
    }
    std::cout << max;
}
