#include <iostream>
#include <array>

int main() {
    int t = 0;
    int n = 0;
    int k = 0;
    int r = 0;
    int c = 0;
    std::cin >> t;
    while (t--) {
        std::cin >> n >> k >> r >> c;
        int n_2 = n;
        if (n % k == 0) {
            n++;
        }
        int arr[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = 0;
            }
        }
        int temp = 0;
        int i = r - 1;
        int j = c - 1;
        for (; i < n; i++) {
            for (; j < n; j++) {
                if (temp % k == 0) {
                    arr[i][j] = 1;
                }
                temp++;
            }
            j = 0;
        }
        temp = 0;
        i = r - 1;
        j = c - 1;
        for (; i >= 0; i--) {
            for (; j >= 0; j--) {
                if (temp % k == 0) {
                    arr[i][j] = 1;
                }
                temp++;
            }
            j = n - 1;
        }
        for (i = 0; i < n_2; i++) {
            for (j = 0; j < n_2; j++) {
                if (arr[i][j] == 1) {
                    std::cout << 'X';
                }
                else {
                    std::cout << '.';
                }
            }
            std::cout << std::endl;
        }
    }
}
