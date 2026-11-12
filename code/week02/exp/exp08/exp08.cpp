#include<iostream>

long memo[100];
long times = 0;
long fib(int n) {
	times++;
	if (n <= 2) {
		return 1;
	}
	if (memo[n] != 0) {
		return memo[n];
	}
	memo[n]=fib(n-1)+fib(n-2);
	return memo[n];
}

int main() {
	std::cout << "fib(40)=" << fib(40) << "  调用了" << times << "次" << "\n";
	return 0;
}