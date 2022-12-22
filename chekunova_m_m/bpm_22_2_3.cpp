#include <iostream>
#include <vector>

int main() {
    int n = 0;
    std::vector<char> str;
    std::vector<char> word;
    std::cin >> n;
    int index = 0;

    for (int i = 0; i < n; i++) {
        char temp;
        std::cin >> temp;
        str.push_back(temp);
        word.push_back(temp);
    }

    if (n % 2 == 0) {
        index = n / 2;
        word.push_back('0');
    }
    else {
        index = n / 2;
    }
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            index += i;
        }
        else {
            index -= i;
        }
        word[index] = str[i];
    }
    if (n % 2 != 0) {
        for (int i = 0; i < n; i++) {
            std::cout << word[i];
        }
    }
    else {
        for (int i = n - 1; i > -1; i--) {
            std::cout << word[i];
        }
    }
}
