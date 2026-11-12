#include<iostream>
#include<cstring>

bool IsPal(const char* s, int l, int r) {
	if (l >= r) {
		return true;
	}
	if (s[l] != s[r]) {
		return false;
	}
	return IsPal(s, l + 1, r - 1);
}

int main() {
	char str[100];
	std::cout << "请输入字符串" << "\n";
	std::cin >> str;
	bool is_ok = IsPal(str, 0, strlen(str) - 1);
	if (is_ok) {
		std::cout << "字符串" << str << "是回文" << "\n";
	}
	else {
		std::cout << "字符串" << str << "不是回文" << "\n";
	}
	return 0;
}