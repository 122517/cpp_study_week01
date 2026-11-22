#include<iostream>
#include<string>
#include<cctype>

void count_letter(const std::string& s, int cnt[26]) {
	for (char c : s) {
		char low_c = static_cast<char>(tolower(c));
		if (low_c >= 'a' && low_c <= 'z') {
			cnt[low_c - 'a']++;
		}
	}
}

int main() {
	int cnt[26] = { 0 };
	std::string s;
	std::cout << "请输入一行：" << "\n";
	getline(std::cin, s);
	count_letter(s, cnt);
	for (int i = 0; i < 26; i++) {
		if (cnt[i] > 0) {
			std::cout << static_cast<char>('a' + i) << ":" << cnt[i] << " ";
		}
	}
	std::cout << "\n";
	std::cout << "cnt[0]=" << cnt[0] << "\n";
	std::cout << "cnt['a'-'a']=" << cnt['a' - 'a'] << "\n";
	return 0;
}