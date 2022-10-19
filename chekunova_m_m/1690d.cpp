#include <iostream>
#include <vector>

int main() {
	int t = 0;
	int n = 0;
	int k = 0;
	int cmin = 0;
	char color = ' ';
	std::cin >> t;
	while (t--) {
		std::cin >> n >> k;
		std::vector<char> c; //cell
		int coun = 0;
		for (int i = 0; i < k; i++) {
			std::cin >> color;
			if (color == 'W') {
				coun++;
			}
			c.push_back(color);
		}
		cmin = coun;
		for (int i = k; i < n; i++) {
			std::cin >> color;
			c.push_back(color);
			if (c[i - k] == 'W') {
				coun--;
			} 
			if (c[i] == 'W') {
				coun++;
			}
			cmin = std::min(coun, cmin);
		}
		std::cout << cmin << '\n';
	}
}
