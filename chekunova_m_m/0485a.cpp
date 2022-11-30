#include <iostream>

int main() {
  long long int x = 0;
  long long int m = 0;
  bool flag = true;
  std::cin >> x >> m;
  for (int i = 0; i < 4 * m; i++) {
    if ((x + x % m) % m != 0) {
      x += x % m;
    } else {
      flag = false;
      break;
    }
  }
  if (flag) {
    std::cout << "No";
  } else {
    std::cout << "Yes";
  }
}
