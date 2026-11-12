#include<iostream>

int bsearch(int* a, int l, int r, int target) {
	if (l > r) {
		return -1;
	}
	int mid = l + (r - l) / 2;
	if (a[mid] == target) {
		return mid;
	}
	if (a[mid] < target) {
		return bsearch(a, mid + 1, r, target);
	}
	return bsearch(a, l, mid - 1, target);
}

int main() {
	int a[] = { 0,1,3,5,7,9,11,13 };
	int a_length = sizeof(a) / sizeof(a[0]);
	int target;
	std::cout << "请输入查找的数" << "\n";
	std::cin >> target;
	int found_index = bsearch(a, 0, a_length - 1, target);
	if (found_index != -1) {
		std::cout << "找到了，索引为：" << found_index << "\n";
	}
	else {
		std::cout << "没找到" << "\n";
	}
	return 0;
}