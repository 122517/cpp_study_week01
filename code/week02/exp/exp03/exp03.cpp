#include<iostream>

int main() {
	int a = 5, b = 6;
	int& r = a;
	int* p = &a;
	std::cout << "sizeof(r)=" << sizeof(r) << "  " << "sizeof(p)=" << sizeof(p) << "\n";
	r = b;
	std:: cout<< "a=" << a << "  " << "b=" << b << "  r=" << r << "\n";
	p = &b;
	std::cout << "*p=" << *p << "\n";
	return 0;
}