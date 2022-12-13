#include<iostream>
 
int main() {
	int n, k, min_time = 101;
	std::cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int vedro;
		std::cin >> vedro;
		if (k % vedro < 0.000000001 and k / vedro < min_time) {
			min_time = k / vedro;
		}
	}
	std::cout << min_time;
}
