#include<iostream>

void reverse_arr(int a[], int n) {
	int i = 0;
	int j = n - 1;
	while (i < j) {
		int t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}
}

void print(int a[], int n) {
	for (int i = 0; i < n; i++) {
		std::cout << a[i] << " ";
	}
	std::cout << "\n";
}

int main() {
	int a1[] = { 1,2,3,4,5 };
	int a2[] = { 1,2,3,4 };
	int len1 = sizeof(a1) / sizeof(a1[0]);
	int len2 = sizeof(a2) / sizeof(a2[0]);
	std::cout << "原a1:";
	print(a1, len1);
	reverse_arr(a1, len1);
	std::cout << "逆序后a1:";
	print(a1, len1);
	std::cout << "\n原a2:";
	print(a2, len2);
	reverse_arr(a2, len2);
	std::cout << "逆序后a2:";
	print(a2, len2);
	return 0;
}