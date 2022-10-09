#include <iostream>
#include <string>

int main() {
    int t = 0;
    int n = 0;
    int k = 0;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int a = 0;
        int b = 0;
        bool tr = 1;
        std::string s;
        std::cin >> n >> k;
        std::cin >> s;
        for (int j = 0; j < n; j++) {
            if (s[j] != '?' && s[j % k] != '?' && s[j] != s[j % k]) {
                tr = 0;
            }
            if (s[j] != '?') {
                s[j%k] = s[j];
            }
        }
        for (int l = 0; l < k; l++) {
            if (s[l] == '0') {
                a++;
            } else if (s[l] == '1') {
                b++;
            }
        }
        if (tr && a <= k / 2 && b <= k / 2) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}
