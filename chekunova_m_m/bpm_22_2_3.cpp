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
        index = n / 2 - 1;
    }
    else {
        index = n / 2;
    }
    for (int i = 0; i < n; i++) {
        std::cout << index;
        word[index] = str[i];
        if (i % 2 == 0) {
            index += i + 1;
        }
        else {
            index -= i;
        }
        std::cout << word[i];
    }
}
