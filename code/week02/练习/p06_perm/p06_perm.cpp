#include<iostream>

void perm(int a[], int n, int start) {
	if (start == n) {
		for (int k = 0; k < n; k++) {
			std::cout << a[k] << " ";
		}
		std::cout << "\n";
		return;
	}
	for (int i = start; i < n; i++){
		std::swap(a[start], a[i]);
		perm(a, n, start + 1);
		std::swap(a[start], a[i]);

	}
}

int main(){
	int a[] = { 1,2,3 };
	perm(a, 3, 0);
	return 0;
}