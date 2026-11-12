#include<iostream>

int step = 0;
void hanoi(int n, char from, char via, char to) {
	if (n == 0) {
		return;
	}
	hanoi(n - 1, from, to, via);
	std::cout << "移动盘子：" << from << "->" << to << "\n";
	step++;
	hanoi(n - 1, via, from, to);
}

int main(){
	int n;
	std::cout << "请输入盘子数" << "\n";
	std::cin >> n;
	hanoi(n, 'A', 'B', 'C');
	std::cout << "总共移动了" << step << "步" << "\n";
	return 0;
}