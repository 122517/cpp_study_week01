#include<iostream>

int times_slow = 0;
int times_fast = 0;
long long pow_slow(int x, int n) {
	times_slow++;
	if (n == 0) {
		return 1;
	}
	return x * pow_slow(x, n - 1);
}

long long pow_fast(int x, int n) {
	times_fast++;
	if (n == 0) {
		return 1;
	}
	long long half = pow_fast(x, n / 2);
	if (n % 2 == 0) {
		return half * half;
	}
	else {
		return half * half * x;
	}
}

int main() {
	int x, n;
	std::cout << "请输入底数" << "\n";
	std::cin >> x;
	std::cout << "请输入指数" << "\n";
	std::cin >> n;
	long long result_slow = pow_slow(x, n);
	long long result_fast = pow_fast(x, n);
	std::cout << "pow_slow的结果为" << result_slow << "  运行系数为" << times_slow << "\n";
	std::cout << "pow_fast的结果为" << result_fast << "  运行次数为" << times_fast << "\n";
	return 0;
}