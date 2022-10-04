#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>

int factorial(int n) {
    int f = 1;
    int i = 0;
    for (i = 1; i <= n; ++i) {
        f = f * i;
    }
    return f;
}

int main() {
    double now = 0;
    double s = 0;
    double step = 0.1;
    double a = 0;
    double b = 1;
    double y = 0;
    double e = 0.0001;
    std::cout <<"  x    s(x)   f(x)" << std::endl;
    for (double x = a; x <= b; x += step) {
        int i = 0;
        y = pow(M_E, 2 * x);
        s = 0;
        do {
            now = (pow(2 * x, i)) / (factorial(i));
            s += now;
            i++;
        } while (abs(now) >= e);
        std::cout << std::fixed << std::setprecision(4);
        std::cout << x << " " << s << " " << y << std::endl;
    }
}
