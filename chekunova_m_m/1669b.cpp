#include<iostream>
#include<map>

int main() {
  int t = 0;
  std::cin >> t;
  while (t--) {
    int n = 0;
    int x = 0;
    std::cin >> n;
    std::map <int, int> mp;
    int ans = -1;
    while (n--) {
      std::cin >> x;
      mp[x]++;
      if (mp[x] >= 3) {
        ans = x;
      }
    }
    std::cout << ans << std::endl;
  }
}
