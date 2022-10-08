#include <iostream>
#include <cmath>

int main() {
    int a = 0;
    int b = 0;
    int n = 0;
    std::cin >> a >> b >> n;
    for (int x = -(abs(b)); x < abs(b); x++) {
        if ((pow(x, n)) == b / a) {
            std::cout << x;
            break;
        } else if ((pow(x, n)) > (b / a)) {
            std::cout << "No solution";
            break;
        }
    }
}
