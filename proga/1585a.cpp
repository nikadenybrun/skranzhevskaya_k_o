#include <iostream>

int main() {
	int t = 0;
	std::cin >> t;
	for (int j = 0; j < t; j++) {
		int n = 0;
		std::cin >> n;
		int count = 0;
		int k = 1;
		int f = 0;
		
		
		for (int i = 0; i < n; i++) {
			int pos = 0;
			std::cin >> pos;
			if (pos == 1 && count == 1) {
				k += 5;
				
			}
			else if (pos == 1 && count == 0) {
				k += 1;
				count = 1;
				
			}
			else if (pos == 0 && count == 0 && i > 0) {
				k = -1;
				
				f = 1;
			}
			else {
				
				count = 0;
			}
		}
		if (f == 1) {
			std::cout << -1<<std::endl;
		}else{ std::cout << k << std::endl; }
		
	}
}
