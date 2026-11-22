#include<iostream>

int main() {
	int n;
	std::cin >> n;
	int max_val, min_val, x;
	double sum = 0.0;
	std::cin >> x;
	max_val = min_val = x;
	sum += x;
	for (int i = 1; i < n; i++) {
		std::cin >> x;
		if (x > max_val) {
			max_val = x;
		}
		if (x < min_val) {
			min_val = x;
		}
		sum += x;
	}
	double avg = sum / n;
	std::cout << "最大值为" << max_val << "  最小值为" << min_val << "  总和为" << sum << "  平均值为" << avg << "\n";
	return 0;
}