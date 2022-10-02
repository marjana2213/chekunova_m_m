#include<iostream>
 
int main() {
    int l;
	  std::cin >> l;
	  if (l % 4 == 0 || l % 7 == 0 || l % 47 == 0
	      || l % 74 == 0 || l % 447 == 0 || l % 474 == 0 || l % 477 == 0
	      || l % 747 == 0 || l % 744 == 0 || l % 774 == 0) {
	      std::cout << "YES";
	  } else {
		    std::cout << "NO";
	  }
}
