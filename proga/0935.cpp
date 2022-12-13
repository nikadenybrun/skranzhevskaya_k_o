#include <iostream>
#include <string>
 
int main() {
	int n = 0;
	std::cin >> n;
	std::string s;
	std::cin >> s;
	int x = 0, y = 0, k = 0;
	int koef = 0;
	if (s[0] == 'U') {
		 koef = 1;
	}
	else {
		 koef = -1;
	}
	///std::cout << s[0] << " " << koef;
 
	for (auto c : s) {
		if (c == 'U') {
			y += 1;
			//std::cout << "u";
		}
		else if (c == 'R') {
			x += 1;
			//std::cout << "r";
		}//std::cout << x << " " << y << std::endl;
 
		if (y > x && koef == -1) {
			k += 1;
			koef = 1;
			//std::cout << "-1";
		}if (y < x && koef == 1) {
			k += 1;
			koef = -1;
			//std::cout << "1";
		}
 
	}
	std::cout << k;
}
