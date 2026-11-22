#include<iostream>
#include<string>
#include<cstring>

bool is_pal(const std::string& s) {
	int l = 0;
	int r = (int)s.size() - 1;
	while (l < r) {
		if (s[l] != s[r]) {
			return false;
		}
		l++;
		r--;
	}
	return true;
}

bool is_pal_c(const char* s) {
	int l = 0;
	int r = (int)std::strlen(s) - 1;
	while (l < r) {
		if (s[l] != s[r]) {
			return false;
		}
		l++;
		r--;
	}
	return true;
}

int main() {
	std::string test[] = { "aba","abba","abc","a","","AbBa" };
	for (auto& str : test) {
		bool a = is_pal(str);
		bool b = is_pal_c(str.c_str());
		std::cout << "[" << str << "] A版" << (a ? "是" : "否") << " B版" << (b ? "是" : "否") << "\n";
	}
	return 0;
}