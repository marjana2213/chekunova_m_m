#include <iostream>
#include <string>
 
int main() {
    int t = 0;
    std::cin >> t;
    std::string pr;
    pr.reserve(100);
    int n = 0;
    int b = 0;
    std::string s;
    for (int x = 0; x < t; x += 1) {
        std::cin >> n;
        pr.resize(n);
        for (int i = 0; i < n; i += 1) {
            std::cin >> pr[i];
        }
        for (int j = 0; j < n; j += 1) {
            std::cin >> b >> s;
            for (int k = 0; k < b; k += 1) {
                char& ch = pr[j];
                if ('U' == s[k]) {
                    ch = '0' == ch ? '9' : ch - 1;
                }
                else if ('D' == s[k]) {
                    ch = '9' == ch ? '0' : ch + 1;
                }
            }
        }
        for (int i = 0; i < pr.length(); i += 1) {
            std::cout << pr[i] << ' ';
        }
        std::cout << '\n';
    }
}
