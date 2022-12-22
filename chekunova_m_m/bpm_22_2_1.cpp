#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  double now = 0;
  double s = 0;
  double step = 0.05;
  double a = 0.1;
  double b = 1;
  double e = 0.0001;
  std::cout << "   x         s(x)" << std::endl;
  for (double x = a; x < b + step; x += step) {
    int i = 0;
    s = 0;
    do {
      now = pow(-1, i) * (pow(x, 2 * i + 1) / (2 * i + 1));
      s += now;
      i++;
    } while (abs(now) >= e);
    std::cout << std::fixed << std::setprecision(5);
    std::cout << x << "     " << s << std::endl;
  }
}
