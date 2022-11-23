#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0;
    int coun = 0;
    int c_1 = 0;
    std::cin >> n;
    std::vector<int> v1(n);
    for (int i = 0; i < n; i++) {
      std::cin >> v1[i];
      int a = v1[i];
      while (a % 2 == 0) {
        a = a / 2;
        coun++;
      }
    }
    std::vector<int> v2;
    for (int i = 0; i < n; i++) {
      c_1 = 0;
      int k = i + 1;
      while (k % 2 == 0) {
        k = k / 2;
        c_1++;
      }
      v2.push_back(c_1);
    }
    sort(v2.begin(), v2.end(), std::greater<int>());
    if (coun >= n)
    {
      std::cout << 0 << std::endl;
      continue;
    }
    c_1 = 0;
    for (auto i = v2.begin(); i != v2.end(); i++) {
      coun += *i;
      c_1++;
      if (coun >= n) {
        std::cout << c_1 << std::endl;
        break;
      }
    }
    if (coun < n) {
      std::cout << -1 << std::endl;
    }
  }
}
