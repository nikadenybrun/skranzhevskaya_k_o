#include <iostream>
#include <algorithm>


int main() {
	int c;
	std::cin >> c;
	for (int i = 0; i < c; i++) {
		int n = 0;
		int m, sx, sy, d;
		std::cin >> n >> m >> sx >> sy >> d;
		if ((sy+d>=m&&sx+d>=n)||(sx-d<=1&&sy-d<=1) || (sx + d >= n && sx - d <= 0) || (sy + d >= m && sy - d <= 0)) {
			std::cout << -1 << std::endl;
		}
		
		else {
			std::cout << n + m - 2 << std::endl;
		}
		
	}

}
