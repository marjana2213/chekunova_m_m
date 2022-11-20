#include <iostream>
#include <vector>
#include <string>

int main () {
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0; 
    int m = 0;
    std::cin >> n >> m;
    std::vector<std::string> v(n);
    for (int i = 0; i < n; i++) {
      std::cin >> v[i];
    }
    int min_x = 6, min_y = 6;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (v[i][j] == 'R') {
          min_x = std::min(i, min_x);
          min_y = std::min(j, min_y);
        }
      }
    }
    if (v[min_x][min_y] == 'R') {
      std::cout << "YES";
    } else {
      std::cout << "NO";
    }
    std::cout << std::endl;
  }
}

