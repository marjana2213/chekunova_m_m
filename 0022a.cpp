#include <iostream>

int main() {
    int n = 0;
    int min1 = 0;
    int min2 = 0;
    int a = 0;
    int temp = 0;
    std::cin >> n;
    std::cin >> a;
    min1 = a;
    if (n == 1) {
        std::cout << "NO";
    } else {
        while (a == min1 && n != 0) {
            std::cin >> a;
            min2 = a;
            n--;
        }
        if (n == 0 && min1 == min2) {
            std::cout << "NO";
        } else {
            if (min2 < min1) {
                temp = min1;
                min1 = min2;
                min2 = temp;
            }
            for (int i = 1; i < n; i++) {
                std::cin >> a;
                if (a < min1) {
                    min2 = min1;
                    min1 = a;
                } else if (a < min2 && a != min1) {
                    min2 = a;   
                }
                std::cout << min2;
            }
        }
    }
