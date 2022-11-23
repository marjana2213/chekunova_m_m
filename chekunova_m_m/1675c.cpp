#include<iostream>

int main() {
  int t = 0;
  std::cin >> t;
  while (t--) {
    std::string s;
    std::cin >> s;
    int n = s.size();
    int k_1 = 0;
    int k_0 = n - 1;
    for (int i = 0; i < n; i++) {
      if (s[i] == '1') {
        k_1 = i;
      } else {
        if (s[i] == '0') {
          k_0 = i;
          break;
        }
      }
    }
    std::cout << k_0 - k_1 + 1 << std::endl;
  }
}
