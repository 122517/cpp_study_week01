#include<iostream>

int main() {
	int arr[3][4] = { { 1,2,3,4 },{ 5,6,7,8 },{ 9,10,11,12 } };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			std::cout << "第" << i + 1 << "行第" << j + 1 << "列为" << arr[i][j] << "  地址为" << &arr[i][j] << "\n";
		}
	}
	return 0;
}