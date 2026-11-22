#include<iostream>

void bubble_sort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j + 1] > arr[j]) {
				int t = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = t;
			}
		}
	}
}

void selection_sort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int min_idx = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}
		int t = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx] = t;
	}
}

void insertion_sort(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << "\n";
}

int main()
{
    // 测试用例
    int t1[] = { 5, 2, 4, 1 };
    int t2[] = { 1, 2, 3, 4, 5 };   // 已有序
    int t3[] = { 5, 4, 3, 2, 1 };   // 完全逆序
    int t4[] = { 3, 3, 1, 3 };
    int t5[] = { 7 };

    // 冒泡
    int arr1[] = { 5,2,4,1 };
    bubble_sort(arr1, 4);
    std::cout << "冒泡 t1："; print(arr1, 4);

    int arr2[] = { 1,2,3,4,5 };
    bubble_sort(arr2, 5);
    std::cout << "冒泡 t2："; print(arr2, 5);

    int arr3[] = { 5,4,3,2,1 };
    bubble_sort(arr3, 5);
    std::cout << "冒泡 t3："; print(arr3, 5);

    int arr4[] = { 3,3,1,3 };
    bubble_sort(arr4, 4);
    std::cout << "冒泡 t4："; print(arr4, 4);

    int arr5[] = { 7 };
    bubble_sort(arr5, 1);
    std::cout << "冒泡 t5："; print(arr5, 1);

    std::cout << "----\n";

    // 选择
    int s1[] = { 5,2,4,1 };
    selection_sort(s1, 4);
    std::cout << "选择 t1："; print(s1, 4);

    int s2[] = { 1,2,3,4,5 };
    selection_sort(s2, 5);
    std::cout << "选择 t2："; print(s2, 5);

    int s3[] = { 5,4,3,2,1 };
    selection_sort(s3, 5);
    std::cout << "选择 t3："; print(s3, 5);

    int s4[] = { 3,3,1,3 };
    selection_sort(s4, 4);
    std::cout << "选择 t4："; print(s4, 4);

    int s5[] = { 7 };
    selection_sort(s5, 1);
    std::cout << "选择 t5："; print(s5, 1);

    std::cout << "----\n";

    // 插入
    int in1[] = { 5,2,4,1 };
    insertion_sort(in1, 4);
    std::cout << "插入 t1："; print(in1, 4);

    int in2[] = { 1,2,3,4,5 };
    insertion_sort(in2, 5);
    std::cout << "插入 t2："; print(in2, 5);

    int in3[] = { 5,4,3,2,1 };
    insertion_sort(in3, 5);
    std::cout << "插入 t3："; print(in3, 5);

    int in4[] = { 3,3,1,3 };
    insertion_sort(in4, 4);
    std::cout << "插入 t4："; print(in4, 4);

    int in5[] = { 7 };
    insertion_sort(in5, 1);
    std::cout << "插入 t5："; print(in5, 1);

    return 0;
}