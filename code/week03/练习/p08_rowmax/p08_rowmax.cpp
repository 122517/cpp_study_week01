#include<iostream>

int row_max(int arr[][4], int rows, int row, int& col) {
	int max_val = arr[row][0];
	col = 0;
	for (int j = 1; j < 4; j++) {
		if (arr[row][j] > max_val) {
			max_val = arr[row][j];
			col = j;
		}
	}
	return max_val;
}

int main() {
	int a[3][4] = {
		{ 1,5,3,2 },
		{ 9,4,7,0 },
		{ 6,8,2,4 }
	};
	int col;
	int rows = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < 3; i++) {
		int max_value = row_max(a, rows, i, col);
		std::cout << "第" << i+1 << "行最大值为" << max_value << ",在第" << col+1 << "列" << "\n";
	}
	return 0;
}