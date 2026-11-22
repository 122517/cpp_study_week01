#include<iostream>

int bsearch(int a[], int n, int key,int& cnt) {
	int lo = 0;
	int hi = n - 1;
	cnt = 0;
	while (lo <=hi) {
		int mid = (hi +lo) / 2;
		cnt++;
		if (a[mid] == key) {
			return mid;
		}
		else if (a[mid] < key) {
			lo = mid + 1;
		}
		else{
			hi = mid - 1;
		}
	}
	return -1;
}

int main() {
	int a[] = { 1,3,5,7,9,11 };
	int len = sizeof(a) / sizeof(a[0]);
	int count;
	int res;
	res = bsearch(a,len, 1, count);   // 头部
	std::cout << "查找1，下标：" << res << "，比较次数：" << count << "\n";
	res = bsearch(a,len, 7, count);   // 中间
	std::cout << "查找7，下标：" << res << "，比较次数：" << count << "\n";
	res = bsearch(a, len, 11, count);  // 尾部
	std::cout << "查找11，下标：" << res << "，比较次数：" << count << "\n";
	res = bsearch(a, len, -2, count);  // 比最小值小
	std::cout << "查找-2，下标：" << res << "，比较次数：" << count << "\n";
	return 0;
}