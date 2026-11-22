#include<iostream>
#include<cstring>

int main() {
	char a[] = "hello";
	std::cout << "sizeof(a)=" << sizeof(a) << "\n";
	std::cout << "strlen(a)=" << strlen(a) << "\n";
	std::cout << "s[5]=" << (int)a[5] << "\n";
	a[2] = '\0';
	std::cout << "sizeof(a)=" << sizeof(a) << "\n";
	std::cout << "strlen(a)=" << strlen(a) << "\n";
	return 0;
}