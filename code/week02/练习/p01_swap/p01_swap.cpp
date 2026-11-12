#include<iostream>

void swapV(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void swapR(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

void swapP(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int a = 9, b = 13;
	swapV(a, b);
	std::cout << "值传递" << " a=" << a << " b=" << b << "\n";
	swapR(a, b);
	std::cout << "引用传递" << " a=" << a << " b=" << b << "\n";
	swapP(&a, &b);
	std::cout << "指针传递" << " a=" << a << " b=" << b << "\n";
	return 0;
}