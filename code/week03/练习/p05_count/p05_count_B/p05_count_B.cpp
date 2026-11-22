#include<iostream>
#include<cctype>

void count_letter(const char buf[], int cnt[26]) {
	for (int i = 0; buf[i]!='\0'; i++) {
		char low_c = static_cast<char>(tolower(buf[i]));
		if (low_c >= 'a' && low_c <= 'z') {
			cnt[low_c - 'a']++;
		}
	}

}

int main() {
	int cnt[26] = { 0 };
	char buf[100];
	std::cout << "请输入一行" << "\n";
	std::cin.getline(buf,100);
	count_letter(buf, cnt);
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