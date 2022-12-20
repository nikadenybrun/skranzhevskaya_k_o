#include <iostream>
#include <string>
#include <vector>

const int siz = 5;

int main() {
	std::string s = "";
	std::cin >> s;
	
	std::vector<char> ar;
	ar = { char("a"), char("o"), char("u"), char("i"), char("e") };
	if ((char("a")) in ar) {
		std::cout << "yes";
	}
	//if (s[s.size() - 1] not in ar && s[s.size() - 2] != "n") {
		//std::cout << "NO";
		//return 0;
	////}
	///for (int i = 0; i < s.size() - 1; i++) {
	//	if(s[i] != "a" && s[i] != "o" && s[i] != "i" && s[i] != "u" && s[i] != "e" && s[i] != "n"){
	////		if (s[i + 1] != "a" && s[i + 1] != "o" && s[i + 1] != "i" && s[i + 1] != "u" && s[i + 1] != "e") {
		///		std::count << "NO";
			//}
		//}
	}

}
