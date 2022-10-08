#include <iostream>
 
int main() {
    int n;
    std::string a;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> a;
        if (a.length() > 10) {
            std::cout << a[0] << a.length()-2 << a[a.length()-1] << std::endl;
        } else {
            std::cout << a << std::endl;
        }
    } 
}
