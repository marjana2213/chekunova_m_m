#include <iostream>

int main() {
  int n = 0;
  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;
  int k = 0;
  int sum_T = 0;
  std::cin >> n;
  std::cin >> a >> b >> c >> d;
  sum_T = a + b + c + d;
  for (int i = 0; i < n-1; i++) {
    int sum = 0;
    std::cin >> a >> b >> c >> d;
    sum = a + b  + c + d;
    if (sum_T >= sum) {
      k++;
    }
  }
  std::cout << n - k;
}
