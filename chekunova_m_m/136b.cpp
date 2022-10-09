#include <iostream>
#include <string>
#include <cmath>

int third(int x) {
    int a = 0;
    int i = 0;
    while (x > 0) {
        a += (x % 3) * pow(10, i);
        x = x / 3;
        i++;
    }
    return a;
}

int ten(int x) {
    int a = 0;
    int i = 0;
    while (x > 0) {
        a += x % 10 * pow(3, i);
        x = x / 10;
        i++;
    }
    return a;
}

int main() {
    int a = 0;
    int c = 0;
    int a3 = 0;
    int c3 = 0;
    int c33 = 0;
    std::cin >> a >> c;
    c3 = third(c);
    a3 = third(a);
    int a32 = a3;
    int i = 0;
    while (c3 > 0) {
        if ((c3 % 10) < (a32 % 10)) {
            c33 += ((c3 % 10) + 3) * pow(10, i);
        } else {
            c33 += (c3 % 10) * pow(10, i);
        }
        i++;
        c3 /= 10;
        a32 /= 10;
    }
    int b = 0;
    int j = 0;
    while (c33 > 0) {
        b += ((c33 % 10) - (a3 % 10)) * pow(10, j);
        j++;
        c33 /= 10;
        a3 /= 10;
    }
    std::cout << ten(b);
}
