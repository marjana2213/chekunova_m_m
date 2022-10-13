#include <iostream>

int main() {
	bool f = 0;
	int x = 0;
	int y = 0;
	int n = 0;
	int k = 0;
	std::string s = " ";
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		char sim = ' ';
		std::cin >> sim;
		s = s + sim;
		if (sim == 'R') {
			x += 1;
			if (x == y) {
				f = 1;
			}
			else if (x > y && f == 1) {
				f = 0;
				k += 1;
			}
		}
		else if (sim == 'U') {
			y += 1;
			if (x == y) {
				f = 1;
			}
			else if (y > x && f == 1) {
				f = 0;
				k += 1;
			}
		}
	}
	std::cout << k;
}
