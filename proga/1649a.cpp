#include <iostream>
#include <vector>
#include <algorithm>
 
 
int main() {
	int t = 0;
	std::cin >> t;
	for (int i = 0; i < t; i++) {
		int n = 0;
		std::cin >> n;
		int k = 0;
		std::vector<int> v;
		for (int j = 0; j < n; j++) {
			int pos = 0;
			std::cin >> pos;
			v.push_back(pos);
		}
		if(std::find(v.begin(), v.end(), 0) != v.end() ){
			
			for (int j = 0; j < n; j++) {
				if (v.at(j) != 0) {
					k += 1;
				}
				else {
					break;
				}
 
			}
			for (int j = 0; j < n; j++) {
				if (v.at(n - j - 1) != 0) {
					k += 1;
				}
				else { break; }
 
			}
 
 
			std::cout << v.size() - k + 1 << std::endl;
		}
		else { std::cout << 0 << std::endl; }
		
		
	}
}
