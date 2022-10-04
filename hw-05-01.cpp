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
    double now = 0;
    double s = 0;
    double step = 0.1;
    double a = -1;
    double b = 1;
    double y = 0;
    double e = 0.001;
    for (double x = a; x <= b; x += step) {
        int i = 0;
        y = cos(x);
        s = 0;
        do {
            now = pow(-1, i) * (pow(x, 2 * i) / factorial(2 * i));
            s += now;
            i++;
        } while (abs(now) >= e);
        std::cout << x << " " << s << " " << y << std::endl;
    }
}
