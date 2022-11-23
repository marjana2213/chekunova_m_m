#include <iostream>

int main() {
	int t = 0;
	std::cin >> t;
	while (t--) {
		int n = 0;
		char c = ' ';
		std::cin >> n >> c;
		std::string s;
		std::cin >> s;
		s += s;
		int last = s.size() - 1;
		int ans = 0;
		for (int i = s.size() - 1; i >= 0; i--) {
			if (s[i] == 'g') {
				last = i;
			}
			if (s[i] == c) {
				ans = std::max(ans, last - i);
			}
		}
		std::cout << ans << "\n";
	}
}
