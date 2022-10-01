#include <iostream>
#include <array>
 
int main() {
    std::array<std::array<int, 5>, 5> m;
    int x, y;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            std::cin >> m[i][j];
            if(m[i][j] == 1) {
               x = i;
               y = j;
            }
        }    
    }
    std::cout << abs(x-2)+abs(y-2);
}
