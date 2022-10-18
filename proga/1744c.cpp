#include<iostream>
#include<string>
#include<algorithm>

int main() {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int length;
		std::cin >> length;
		std::string flag;
		std::cin >> flag;

		std::string s;
		std::cin >> s;
		int time = 0;
		int size = s.size();
		
		for(int j = 0; j < size; j ++) {
			int index_now = s.find(flag);
			int index_g = s.find('g');
			if (abs(index_now - index_g) > length) {
				length = abs(index_now - index_g);

			}

		}




	}
}
