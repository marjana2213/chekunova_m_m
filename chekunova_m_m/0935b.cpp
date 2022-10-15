#include <iostream>

int main() {
    int y = 0;
    int x = 0;
    bool f = 0;
    int k = 0;
    int n = 0;
    char sum = ' ';
    char s1 = ' ';
    std::cin >> n;
    std::cin >> s1;
    if (s1 == 'U') {
        y += 1;
        sum = 'U';
    } else if (s1 == 'R') {
        x += 1;
        sum = 'R';
    }
    for (int i = 1; i < n; i++) {
        char s = ' ';
        std::cin >> s;
        if (s == 'U') {
            y += 1;
            if (f == 1 && s == sum) {
                k += 1;
            }
            if (y == x) {
                f = 1;
            } else {
                f = 0;
            }
            sum = s;
        }
        if (s == 'R') {
            x += 1;
            if (f == 1 && s == sum) {
                k += 1;
            }
            if (y == x) {
                f = 1;
            } else {
                f = 0;
            }
            sum = s;
        }
    }
    std::cout << k;
}
