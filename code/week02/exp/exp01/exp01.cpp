#include<iostream>

void try_change(int x) {
	std::cout << "in  &x=" << &x << "\n";
	x = 100;
}

int main() {
	int x = 10;
	std::cout << "main  &x=" << &x << "\n";

	try_change(x);

	std::cout << "after x=" << x << "\n";
	return 0;
}