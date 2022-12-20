#include <iostream>


int main() {
	int x = 0;
	int y = 0;
	int n = 0;
	int count = 0;
	while (std::cin >> x >> y) {
		if (((x * x + y * y) <= 4) && (y >= (2 - (x * x)))) {
			n += 1;
		}
		count += 1;
	}
	std::cout << (n* 100 / count);
}
