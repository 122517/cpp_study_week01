#include<iostream>
#include<cmath>

bool is_prime_primary(int n) {
	if (n <= 1) return false;
	for (int i = 2; i <= n - 1; i++) {
		if (n% i == 0) return false;
	}
	return true;
}

bool is_prime_sqrt(int n) {
	if(n<=1) return false;
	int limit = static_cast<int>(std::sqrt(n));
	for (int i = 2; i <= limit; i++) {
		if(n%i==0) return false;
	}
	return true;
}

int main() {
	int n;
	std::cout << "请输入一个整数" << "\n";
	std::cin >> n;
	bool is_ok = is_prime_sqrt(n);
	if (is_ok) {
		std::cout << n << "是素数" << "\n";
	}
	else {
		std::cout << n << "不是素数" << "\n";
	}
	return 0;
}