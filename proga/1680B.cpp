#include <iostream>


int main() {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int l1, r1, l2, r2;
		std::cout << l1, r1, l2, r2;
		if (l1 < l2 && r1 < r2) {
			std::cout << l1 + l2;
		}
		else if (l1 > l2 && r1 > r2) {
			std::cout << l1 + l2;
		}
		else if (l1 <= l2) {
			std::cout << l2;
		}
		else if (l1 > l2) {
			std::cout << l1;
		}



	}
}
