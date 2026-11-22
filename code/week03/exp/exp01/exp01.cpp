#include<iostream>

int main() {
	int a[5] = { 1,2,3,4,5 };
	int gurad = 9527;
	for (int i = 0; i < 5; i++) {
		std::cout << a[i] << " ";
	}
	std::cout << "\n";
	std::cout << "gurad=" << gurad << "\n";
	a[10] = 1;
	return 0;
}