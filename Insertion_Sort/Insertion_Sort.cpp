#include <iostream>

void insertionSort(int* arr, size_t length);
void printArr(int* arr, size_t length);
void swap(int* arr, size_t idx1, size_t idx2);

int main() {
	const size_t size = 10;
	int arr[size]{ 3,1,7,2,4,5,6,9,10,8 };
	printArr(arr, size);
	insertionSort(arr, size);
	printArr(arr, size);
	return 0;
}

void insertionSort(int* arr, size_t length) {
	for (size_t i = 1; i < length; i++) {
		int curVal = arr[i];
		size_t j;
		for (j = (i - 1); j >= 0 && arr[j] > curVal; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = curVal;
	}
}

void swap(int* arr, size_t idx1, size_t idx2) {
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

void printArr(int* arr, size_t length) {
	std::cout << "\n[";
	for (size_t i = 0; i < length; i++) {
		i == (length - 1) ? std::cout << arr[i] : std::cout << arr[i] << "  ";
	}
	std::cout << "]\n";
}
