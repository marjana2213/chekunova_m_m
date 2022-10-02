#include<iostream>
 
int main() {
    long long n, x, y, a;
    std::cin >> n >> x >> y;
    a = y - (n - 1);
    if ((a * a + (n - 1)) >= x && a > 0) {
        std::cout << a << std::endl; 
		    n--;
		    while (n--) {
			      std::cout << 1 << std::endl;
		    }
	  } else {
		    std::cout << -1;
	  }
}
