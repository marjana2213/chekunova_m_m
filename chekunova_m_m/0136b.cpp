#include <iostream>
#include <vector>

int main()
{
    int a = 0;
    int c = 0;
    int k = 0;
    std::cin >> a >> c;
    std::vector <int> a3;
    std::vector <int> c3;

    while (a > 0 || c > 0) {
        if (a > 0) {
            a3.push_back(a % 3);
            a /= 3;
        }
        if (c > 0) {
            c3.push_back(c % 3);
            c /= 3;
        }
    }
    if (a3.size() > c3.size()) {
        k = a3.size() - c3.size();
        for (int i = 0; i < k; i++) {
            c3.push_back(0);
        }
    } else {
        k = c3.size() - a3.size();
        for (int i = 0; i < k; i++) {
            a3.push_back(0);
        }
    }
    for (int i = 0; i < a3.size(); i += 1) {
        if (c3[i] - a3[i] < 0) {
            c3[i] += 3;
        }
        a3[i] = c3[i] - a3[i];
    }
    int pow = 1;
    int b = 0;
    for (int i = 0; i < a3.size(); i += 1) {
        b += a3[i] * pow;
        pow *= 3;
    }
    std::cout << b << "\n";
}
