#include <iostream>
#include <vector>

int main() {
  int n = 0;
  int games = 0;
  int player = 0;
  long long k = 0;
  std::cin >> n >> k;
  std::vector<int> v_1;
  for (int i = 0; i < n; i++) {
    int x = 0;
    std::cin >> x;
    v_1.push_back(x);
  }
  player = v_1[0];
  for (int i = 1; i <= n; i++) {
    if (player > v_1[i]) {
      v_1.push_back(v_1[i]);
      ++games;
      if (k == games) {
        break;
      }
    } else {
      player = v_1[i];
      v_1.push_back(v_1[i]);
      games = 1;
    }
  }
  std::cout << player;
}
