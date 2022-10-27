#include <iostream>
#include <vector>

int main() {
	int t = 0;
	int n = 0;
	int x = 0;
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
				index = i;
				if (index % 2 == 0) {
					while (index % 2 == 0) {
						counter
					}
				}
			}
		}
	}
}
