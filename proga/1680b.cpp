#include <iostream>


int main() {
	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int left1, r1, left2, r2;
		std::cin >> left1 >> r1 >> left2 >> r2;
		if(left1 > left2){
		    int l_h = 0;
		    int r_h = 0;
		    
		    r_h = r1 + 0;
		    r1 = r2 + 0;
		    r2 = r_h + 0;
		    
		    l_h = left1 + 0;
		    left1 = left2 + 0;
		    left2 = l_h + 0;
		}
		//std::cout << left1 << r1 << left2 << r2 << std::endl;
		if (r1 < left2) {
			std::cout << left1 + left2 << std::endl;
		}else{
		    std::cout << left2 << std::endl;
		}
		



	}
}
