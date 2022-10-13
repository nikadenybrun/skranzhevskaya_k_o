#include<iostream>
#include<vector>
 
 
 
int main() {
	int a, c, b_numb = 0;
	std::cin >> a >> c;
	std::vector<int> b;
	std::vector<int> av;
	std::vector<int> cv;
 
	while (a > 0) {
		av.push_back(a % 3);
		a /= 3;
	}
	while (c > 0) {
		cv.push_back(c % 3);
		c /= 3;
	}
 
	int as = av.size();
	int cs = cv.size();
 
 
	if (as > cs) {
		for (int j = 0; j < (as - cs); j++) {
			cv.push_back(0);
		}
		cs = as + 0;
	}
	else if (as < cs) {
		for (int j = 0; j < (cs - as); j++) {
			av.push_back(0);
		}
	}
 
	for (int i = 0; i < cs; i++) {
		if (cv[i] - av[i] == -1) {
			b.push_back(2);
		}
		else if ((cv[i] - av[i] == -2)) {
			b.push_back(1);
		}
		else {
			b.push_back(cv[i] - av[i]);
		}
	}
	int count = 1;
	int b_size = b.size();
	for (int i = 0; i < b_size; i++) {
		b_numb += b[i] * count;
		count *= 3;
	}
	std::cout << b_numb;
 
 
}
