#include <iostream>
#include <vector>
 
int main() {
	int t;
	std::cin >> t;
	for (long long i = 0; i < t; i++) {
		long long len = 0;
		long long k = 0;
		long long step = 0;
		long long n = 0;
		std::string s;
		std::cin >> len >> s >> k;
		std::vector<int> r(50);
		char symbol = ' ';
		for (long long j = 0; j < k; j++) {
			std::cin >> symbol;
			r[symbol - 'a'] = 1;
		}
		for (long long i2 = 0; i2 < len; i2++) {
			if (r[s[i2] - 'a'] == 1) {
				step = std::max(step, n);
				n = 1;
			} else {
				n = n + 1;
			}
		}
		std::cout << step << '\n';
	}
}
