#include<iostream>

int boom(int n) {
	int pad[16];
	pad[0] = n;
	if (n >= 16) {
		return 0;
	}
	return boom(n + 1) + pad[0];
}

int main() {
	return boom(0) * 0;
}