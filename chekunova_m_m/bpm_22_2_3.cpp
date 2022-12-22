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

    for (int i = 0; i < n; i++) {
        if ((str.size() - i) % 2 == 0) {
            index = (str.size() - i) / 2 - 1;
        }
        else {
            index = (str.size() - i) / 2;
        }
        //word.push_back(str[index]);
        //str.erase(str.begin() + index);

        word[index] = str[i];
        //str.erase(str.begin());
        std::cout <<  word[i];
    }
}
