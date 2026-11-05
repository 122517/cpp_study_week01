#include<iostream>
#include<cstdlib>
#include<ctime>

int main() {
	std::srand((unsigned)std::time(NULL));
	int target = std::rand() % 100 + 1;
	int count = 0, guess = 0;
	while (count < 7) {
		std::cout <<"请输入猜测的数字（1-100）" << "\n";
		if (!(std::cin >> guess)) {
			std::cout << "输入错误！请输入1-100之间的整数" << "\n";
			std::cin.clear();
			std::cin.ignore(1000,'\n');
			continue;
		}
		count++;
		if (guess == target) {
			std::cout << "恭喜你猜对了，答案是" << target <<" 次数为" << count << "\n";
			break;
		}
		else if (guess < target) {
			std::cout << "小了" << "\n";
		}
		else if (guess > target) {
			std::cout << "大了" << "\n";
		}
		 if(count==7){
			std::cout << "很遗憾，你没有猜对。答案是" << target << "\n";
		}
	}
	return 0;
}