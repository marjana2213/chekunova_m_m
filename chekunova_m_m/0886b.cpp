#include <iostream>
#include <map>
#include <vector>

int main() {
  int n = 0;
  int a = 0;
  int result = 0;
  int min = 100000000000000000;
  std::vector<int> v;
  std::map<int,int> m;
  std::cin >> n;
  if (n == 1) {
    std::cin >> a;
    std::cout << a;
  } else {
    for (int i = 0; i < n; i++) {
      std::cin >> a;
      m[a] = i;
      v.push_back(a);
    }
    for (int i = 0; i < n; i++) {
      if (m[v[i]] < min) {
        result = v[i];
        min = m[v[i]];
      }
    }
    std::cout << result;
  }
}
