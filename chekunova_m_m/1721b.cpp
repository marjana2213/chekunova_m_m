#include <iostream>
 
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n = 0;
        int m = 0;
        int sx = 0;
        int sy = 0;
        int d = 0;
        std::cin >> n >> m >> sx >> sy >> d;
        if ((sx + d >= n && sy + d >= m) || (sy - d <= 1 && sx - d <= 1) || (sx - d <= 1 && sx+ d >= n) || (sy + d >= m && sy - d <= 1)) {
            std::cout << -1 << std::endl;   
        } else {
            std::cout << abs(1-n) + abs(1-m) << std::endl;
        }
    }
}
