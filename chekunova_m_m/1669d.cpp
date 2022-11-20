#include <iostream>

int main() {
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0;
    std::cin >> n;
    std::string s;
    std::cin >> s;
    s += 'W';
    std::string ans = "YES";
    int j = 0;
    int r = 0;
    for (int i = 0; i < n + 1; i++) {
      if (s[i] == 'B') {
        j++;
      }
      else if (s[i] == 'R') {
        r++;
      } else {
        if ((r == 0 && j != 0) || (r != 0 && j == 0)) {
          ans = "NO";
        }
        r = 0;
        j = 0;
      }
    }
    std::cout << ans << std::endl;
  }
}
