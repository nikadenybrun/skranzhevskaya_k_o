#include <iostream>
#include <algorithm>

int main(){
	int t = 0;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		int n = 0;
		int k = 0;
		int r = 0;
		int c = 0;
		std::cin >> n >> k >> r >> c;
		int differ_x = r % k;
		int differ_y = c % k;

		for (int x = 0; x < n; x++) {
			for (int y = 0; y < n; y++) {
				if (((x + 1 + k) - differ_x) % k == ((y + 1 + k)  - differ_y) % k) {
					std::cout << "X";
				}
				else {
					std::cout << ".";
				}
				
				
				}
			std::cout << std::endl;
			}
		}
	}
