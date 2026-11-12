#include<iostream>
#include<chrono>

long times = 0;
long fib(int n) {
	times++;
	if (n <= 2) {
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}

long fib_iter(int n) {
	if (n <= 2) {
		return 1;
	}
	long a = 1, b = 1;
	for (int i = 3; i <=n; i++) {
		long temp = a + b;
		a = b;
		b = temp;
	}
	return b;
}

int main() {
	auto t0 = std::chrono::steady_clock::now();
	long result1 = fib(40);
	auto t1 = std::chrono::steady_clock::now();
	std::cout << "fib(40)=" << result1 << "  调用了" << times << "次" << "  用时" << std::chrono::duration<double, std::milli>(t1 - t0).count() << "毫秒" << "\n";

	auto t2 = std::chrono::steady_clock::now();
	long result2 = fib_iter(40);
	auto t3 = std::chrono::steady_clock::now();
	std::cout<<"fib_iter(40)="<<result2<<"  用时"<<std::chrono::duration<double,std::milli>(t3-t2).count()<<"毫秒"<<"\n";
	return 0;
}