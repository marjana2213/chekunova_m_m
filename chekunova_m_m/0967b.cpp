#include<iostream>
#include<vector>
#include<algorithm>

int main() {
  int n = 0;
  int a = 0;
  int b = 0;
  int s = 0;
  int k = 0;
  int res = 0;
  std::cin >> n >> a >> b;
  std::vector<int>v(n);
  for (int i = 0; i < n; i++) {
    std::cin >> v[i];
    s += v[i];
  }
  k = v[0];
  v[0] = 0;
  std::sort(v.rbegin(), v.rend());
  while (a * k / s < b) {
    s -= v[res++];
  }
  std::cout << res;
}
