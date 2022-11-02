#include <iostream>
#include <queue>

int main() {
  int n = 0;
  long long k = 0;
  std::queue<int> q;
  std::cin>> n >> k;
  if (n == 2) {
    int a = 0;
    int b = 0;
    std::cin >> a;
    std::cin >> b;
    std::cout << std::max(a, b);
  }
  if (n > 2) {
    int counter = 0;
    int num = 0;
    std::cin >> num;
    for (int i = 0; i < n; i++) {
      int a = 0;
      std::cin >> a;
      q.push(a);
    }
    do {
      if (num > q.front()) {
        counter++;
        q.push(q.front());
        q.pop();
      } else {
        q.push(num);
        num = q.front();
        q.pop();
        counter = 1;
      }
      std::cout << num;
    } while (counter != k && counter != 2 * n);
    std::cout << num;
  }
}
