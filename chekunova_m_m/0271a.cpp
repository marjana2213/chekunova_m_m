#include <iostream>

int main()
{
    int y = 0;
    std::cin >> y;
    for (y += 1; y <= 9999; y += 1) {
        int r1 = y / 1000;
        int r2 = (y % 1000) / 100;
        int r3 = (y % 100) / 10;
        int r4 = y % 10;
        bool t = r1 != r2;
        t = t && r1 != r3;
        t = t && r1 != r4;
        t = t && r2 != r3;
        t = t && r2 != r4;
        t = t && r3 != r4;
        if (t) {
            std::cout << y;
            break;
        }
    }
}
