#include<iostream>

int tree_depth(int* a, int i, int n) {
	if (i > n || a[i] == 0) {
		return 0;
	}
	int left_depth = tree_depth(a, 2 * i, n);
	int right_depth = tree_depth(a, 2 * i + 1, n);
	return 1 + (left_depth > right_depth ? left_depth : right_depth);
}

int main() {
	int arr[] = { 0,2,4,6,7,4,8,9 };
	int n = sizeof(arr) / sizeof(arr[0]) - 1;
	std::cout << "该数组在完全二叉树的深度" << tree_depth(arr, 1, n) << "\n";
	return 0;
}