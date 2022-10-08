#include <iostream>
#include <vector>
 
int main() {
    int n = 0;
    int a = 0;
    std::cin >> n;
    std::vector <int> mas1;
    std::vector <int> mas2;
    for (int i = 0; i < n; i++) {
        std::cin >> a;
        mas1.push_back(a);
    }
    mas2.push_back(mas1[mas1.size()-1]);
    for (int x = mas1.size()-2; x >= 0; x--) {
        bool t = true;
        for (int i = 0; i < mas2.size(); i++) {
            if (mas2[i] == mas1[x]) {
                t = false;
                break;
            }
        }
        if (t) {
            mas2.push_back(mas1[x]);
        }
    }
    std::cout << mas2.size() << std::endl;
    for (int i = mas2.size()-1; i > -1; i--) {
        std::cout << mas2[i] << " ";
    }
}
