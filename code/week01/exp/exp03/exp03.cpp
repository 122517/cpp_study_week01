#include<iostream>

int main() {
	int a = 5;
	int b = a++;
	int c = ++a;
	std::cout << "a=" << a << " b=" << b << " c=" << c << "\n";

	int i = 0;
	int arr[3] = { 10, 20, 30 };
	std::cout << "arr[i++]=" << arr[i++] << " i=" << i << "\n";

	int x = 0;
	if (x != 0 && 10 / x > 0) {}
	std::cout << "safe\n";
	return 0;
}