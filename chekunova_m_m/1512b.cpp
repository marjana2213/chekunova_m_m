#include <iostream>
#include <vector>
#include<string>

int main() {
	int t = 0;
	std::cin >> t;
	while (t--) {
		int n = 0;
		std::cin >> n;
		std::vector<int> x;
		std::vector<int> y;
		std::string g[400];
		for (int i = 0; i < n; ++i) {
			std::cin >> g[i];
			for (int j = 0; j < n; ++j) {
				if (g[i][j] == '*') {
					x.push_back(i);
					y.push_back(j);
				}
			}
		}
		if (x[0] == x[1]) {
			x[1] = x[0] == 0;
		}
		if (y[0] == y[1]) {
			y[1] = y[0] == 0;
		}
		for (int i : x) {
			for (int j : y) {
				g[i][j] = '*';
			}
		}
		for (int i = 0; i < n; ++i) {
			std::cout << g[i] << std::endl;
		}
	}
}
