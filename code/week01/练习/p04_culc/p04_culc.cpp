#include<iostream>

int main() {
	int a, b;
	char op;
	std::cout << "请输入表达式（例如 3+4）" << "\n";
	std::cin >> a >> op >> b;
	int result;
	bool is_vaild = true;
	if (op == '+') {
		result = a + b;
	}
	else if (op == '-') {
		result = a - b;
	}
	else if (op == '*') {
		result = a * b;
	}
	else if (op == '/') {
		if (b == 0) {
			std::cout << "除数不能为0" << "\n";
			is_vaild = false;
		}
		else {
			result = a / b;
		}
	}
	else {
		std::cout << "运算符错误" << "\n";
		is_vaild = false;
	}
	if (is_vaild) {
		std::cout << a <<" "<< op << " " << b << "=" << result << "\n";
	}
	return 0;
}