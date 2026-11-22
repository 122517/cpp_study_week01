#include<iostream>
#include<cstdlib>

struct Array {
	int* data; int size; int capacity;
};

void init(Array& a, int cap = 4) {
	if (cap <= 0) {
		cap = 1;
	}
	a.data = (int*)malloc(cap * sizeof(int));
	if (!a.data) {
		std::cout << "malloc失败\n";
		exit(1);
	}
	a.size = 0;
	a.capacity = cap;
}

void resize(Array& a, int newcap) {
	if (newcap < a.size) {
		std::cout << "resize失败，newcap<size,会导致数据丢失\n";
		return;
	}
	int* newdata = (int*)realloc(a.data, newcap * sizeof(int));
	if (!newdata) {
		std::cout << "realloc失败\n";
		return;
	}
	std::cout << "扩容: " << a.capacity << " -> " << newcap << "\n";
	a.data = newdata;
	a.capacity = newcap;
}

void push(Array& a, int x) {
	if (a.size == a.capacity) {
		resize(a, 2 * a.capacity);
	}
	a.data[a.size++] = x;
}

int get(const Array& a, int i) {
	if (i < 0 || i >= a.size) {
		std::cout << "越界！下标非法\n";
		return -1;
	}
	return a.data[i];
}

int pop(Array& a) {
	if (a.size == 0) {
		std::cout << "pop失败:数组为空\n";
		return -1;
	}
	return a.data[--a.size];
}

void destroy(Array& a) {
	free(a.data);
	a.data = nullptr;
	a.size = 0;
	a.capacity = 0;
}

int main() {
	Array a;
	init(a, 4);
	for (int i = 0; i < 20; i++) {
		push(a, i);
	}
	destroy(a);
	return 0;

}