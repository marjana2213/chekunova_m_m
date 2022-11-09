#include <iostream>
#include <vector>

int main() {
  int n = 0;
  int p = 0;
  std::vector<int> g1; 
  std::cin >> n;
  g1.assign(n, 0);
  for (int i = 0; i < n; i++) {
    std::cin >> p;
    p = p - 1;
    g1[p] = i;
  }
  for (int i = 0; i < g1.size(); i++) {
    std::cout << g1[i] + 1 << " ";
  }
}
