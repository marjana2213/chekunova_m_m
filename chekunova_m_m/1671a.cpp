#include <iostream>
#include <string>

int main() {
  int t = 0;
  std::cin >> t;
  for (int i = 0; i < t; i++) {
    bool ok = true;
    std::string s;
    std::cin >> s;
    int coun = 1;
    char sumbol = s[0];
    for (int j = 1; j < s.size(); j++) {
      if (s[j] == sumbol) {
        coun += 1;
      } else {
        if (coun < 2) {
          ok = false;
        }
        coun = 1;
      }
      sumbol = s[j];
    }
    if (coun < 2) {
      ok = false;
    }
    if (ok) {
      std::cout << "YES" << '\n';
    } else {
      std::cout << "NO" << '\n';
    }
  }
}
