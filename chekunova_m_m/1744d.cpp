#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int t = 0;
  int n = 0;
  int x = 0;
  std::cin >> t;
  while (t--) {
    std::cin >> n;
    std::vector<int>num;
    for (int i = 0; i < n; i++) {
      std::cin >> x;
      num.push_back(x);
    }
    int counter_2 = 0;
    for (int i = 0; i < n; i++) {
      if (num[i] % 2 == 0) {
        while (num[i] % 2 == 0) {
          counter_2++;
          num[i] /= 2;
        }
      }
    }
    if (counter_2 == n) {
      std::cout << 0 << std::endl;
    } else {
      std::vector<int>vec_2;
      for (int i = n; i >= 1; i--) {
        int index = 0;
        int coun_2 = 0;
        index = i;
        if (index % 2 == 0) {
          while (index % 2 == 0) {
            coun_2++;
            index /= 2;
          }
          vec_2.push_back(coun_2);
        }
      }
      int action = 0; //операции
      int act_0 = -1;
      sort(vec_2.begin(), vec_2.end());
      for (int j = vec_2.size() - 1; j >= 0; j--) {
        action++;
        counter_2 += vec_2[j];
        if (counter_2 >= n) {
          act_0 = action;
          break;
        }
      }
      std::cout << act_0 << std::endl;
    }
  }
}
    
