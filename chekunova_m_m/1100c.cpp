#include <iostream>
#include <cmath>

int main() {
    float n = 0;
    float r = 0;
    const double PI = acos(-1.0);
    std::cin >> n >> r;
    float sinus = sin(PI/n);
    float R = ((r * sinus)/(1 - sinus));
    printf("%.8f", R);
}
