#include<iostream>

void f(int arr[]) {
	std::cout << "函数内sizeof(arr)=" << sizeof(arr) << "\n";
}

int main() {
	int a[] = { 1,2,3,4,5 };
	std::cout << "主函数内sizeof(a)=" << sizeof(a) <<
		"  个数为" << sizeof(a) / sizeof(a[0]) << "\n";
	f(a);
	return 0;
}