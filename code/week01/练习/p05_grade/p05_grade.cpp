#include<iostream>

int main() {
	int score;
	std::cout << "请输入一个整数（100）" << "\n";
	std::cin >> score;

	if (score < 0 || score > 100) {
		std::cout << "输入错误" << "\n";
		system("pause");
		return 1;
	}

	switch (score / 10) {
	case 10:
	case 9:
		std::cout << "A" << "\n";
		break;
	case 8:
		std::cout << "B" << "\n";
		break;
	case 7:
		std::cout << "C" << "\n";
		break;
	case 6:
		std::cout << "D" << "\n";
		break;
	default:
		std::cout << "E" << "\n";
		break;
	}
	system("pause");
	return 0;
	}
