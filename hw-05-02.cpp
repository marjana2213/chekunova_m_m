#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double now = 0;
    const double PI = acos(-1.0);
    double s = 0;
    double step = 0.05;
    double a = 0;
    double b = 1;
    double y = 0;
    double e = 0.001;
    std::cout << "  x     s(x)    f(x)" << std::endl;
    for (double x = a; x <= b; x += step) {
        int i = 1;
        y = (x * sin(PI / 4)) / (1 - 2 * x * cos(PI / 4));
        s = 0;
        do {
            now = pow(x, i) * sin(i * PI / 4);
            s += now;
            i++;
        } while (abs(now) >= e);
        std::cout << std::fixed << std::setprecision(4);
        std::cout << x << " " << s << " " << y << std::endl;
    }
}
