#include<iostream>

int Maxof(int* a, int n) {
	if (n == 1) {
		return a[0];
	}
	int pre_max = Maxof(a, n - 1);
	return (a[n - 1] > pre_max) ? a[n - 1] : pre_max;
}

int main() {
	int arr[] = { 11,34,5,67,23,41 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = Maxof(arr, n);
	std::cout << "前" << n << "个数中" << result << "最大" << "\n";
	return 0;
}