#include<iostream>

int depth = 0;
long fact(int n) {
	depth++;
	std::cout << "进入第" << depth << "层" << "  n=" << n << "  n的地址为" << &n << "\n";
	if (n <= 1) {
		std::cout << "=====触底!=====" << "\n";
		std::cout << "第" << depth << "层返回" << "\n";
		depth--;
		return 1;
	}
	long result = n * fact(n - 1);
	std::cout << "第" << depth << "层返回" << "  result=" << result << "\n";
	depth--;
	return result;
}

int main() {
	int n;
	std::cout << "请输入一个正整数" << "\n";
	std::cin >> n;
	std::cout<< fact(n) << "\n";
	return 0;
}