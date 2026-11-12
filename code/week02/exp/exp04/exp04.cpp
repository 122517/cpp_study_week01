#include<iostream>

int Maxof(int x, int y) {
	return x > y ? x : y;
}

double Maxof(double x, double y) {
	return x > y ? x : y;
}

int Maxof(int x, int y, int z) {
	int t = Maxof(x, y);
	return Maxof(t, z);
}

void show(int a, int b = 10, int c = 20) {
	std::cout << "a=" << a << "  b=" << b << "  c=" << c << "\n";
}

//double Maxof(int x, int y) {
//	return (x > y) ? (double)x : (double)y;
//}

int main() {
	std::cout << Maxof(3, 5) << "\n";
	std::cout << Maxof(2.4, 1.8) << "\n";
	std::cout << Maxof(1, 4, 9) << "\n";

	show(1);
	show(1, 5);
	show(1, 5, 9);

	return 0;
}