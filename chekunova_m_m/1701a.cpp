#include <iostream>

int main() {
  int t;
  std::cin >> t;
  while (t--) {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    std::cin >> a >> b >> c >> d;
    if (a + b + c + d == 4) {
      std::cout << 2 << "\n";
    }
    else if (a + b + c + d == 0) {
      std::cout << 0 << "\n";
    }
    else {
      std::cout << 1 << "\n";
    }
  }
