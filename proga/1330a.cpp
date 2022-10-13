#include <iostream>
#include<vector>
#include<array>
 
int main() {
	int counter;
	std::cin >> counter;
	std::vector<int> result;
	for (int i = 0; i < counter; i++) {
		int n, x;
		std::cin >> n >> x;
		const int maxx = 200;
		std::array<bool,maxx> vec;
		for (int j = 1; j <= n + x; j++) { 
			vec[j] = (false);
		}
		for (int j = 0; j < n; j++) { 
			int k;
			std::cin >> k;
			vec[k] = true;
		}
		for (int ii = n + x; ii > 0; ii--) {
			int k = 0;
			for (int j = 1; j <= ii; j++) {
				if (!vec[j]) { k++; }
			}
			if (k <= x) {
				result.push_back(ii);
				break;
			}
		}
	}
	for (int i = 0; i < counter; i++) {
		std::cout << result[i]<< std::endl;
	}
		
}
