#include <iostream>
#include <vector>
#include <string>

int main() {
  int t;
  std::cin >> t;
  std::vector<std::string> v(8);
  while (t--) {
    for (int i = 0; i < 8; i++) {
      std::cin >> v[i];
    }
    for (int i = 1; i < 7; i++) {
      for (int j = 1; j < 7; j++) {
        if (v[i][j] == '#' && v[i - 1][j - 1] == '#' && v[i - 1][j + 1] == '#' && v[i + 1][j - 1] == '#' && v[i + 1][j + 1] == '#') {
          std::cout << i + 1 << ' ' << j + 1 << std::endl;
        }
      }
    }
  }
}
