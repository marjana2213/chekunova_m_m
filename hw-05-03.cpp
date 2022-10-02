#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

int factorial(int n) {
    int f = 1;
    int i = 0;
    for (i = 1; i <= n; ++i) {
        f = f * i;
    }
    return f;
}

int main() {
    double s = 0;
    double step = 0.1;
    double a = 0;
    double b = 1;
    double y = 0;
    double e = 0.0001;
    for (double x = a; x <= b; x += step) {
        int i = 0;
        y = pow(M_E,2 * x);
        s = 0;
        do {
            s += (pow(2 * x, i))/(factorial(i));
            i++;
        } while (abs(y - s) >= e);
        std::cout << x << " " << s << " " << y << std::endl;
    }
}
