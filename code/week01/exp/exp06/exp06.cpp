#include<iostream>
#include<string>
#include<iomanip>

int main() {
	int a; double b;
	std::cin >> a >> b;
	std::cout << a << "  " << b << "\n";

	std::cin.ignore(1000, '\n');
	std::string line;
	std::getline(std::cin, line);
	std::cout << line << "\n";

	std::cout << std::fixed << std::setprecision(2) << 3.1415926 << "\n";
	return 0;
}