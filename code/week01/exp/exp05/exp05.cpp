#include<iostream>

int g = 10;

void counter() {
	int a = 0;
	static int s = 0;
	a++; s++;
	std::cout << "a=" << a << ",s=" << s << "\n";
}

int main() {
	counter(); counter(); counter();
	{
		int g = 9;
		std::cout << "内部g=" << g << "\n";
	}
	std::cout << "外部g=" << g << "\n";
	return 0;
}