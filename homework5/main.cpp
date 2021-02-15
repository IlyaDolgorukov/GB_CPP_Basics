#include <iostream>

using namespace std;

void printArray(const int size, const int* arr, const int balance = 0);
void invertArray(const int, int*);
void fillArray(const int, const int, int*);
int sumArray(const int, const int*);
int checkBalance(const int, const int*);
void offsetArray(const int, int, int*);

int main(int argc, char** args) {

	// Task 1
	const int SIZE1 = 10;
	int arr1[SIZE1] = {1, 1, 0, 0, 1, 0, 1, 1, 0, 0};
	cout << "Before inversion: ";
	printArray(SIZE1, arr1);
	invertArray(SIZE1, arr1);
	cout << "After inversion:  ";
	printArray(SIZE1, arr1);

	// Task 2
	const int SIZE2 = 8;
	int arr2[SIZE2];
	fillArray(SIZE2, 3, arr2);
	cout << "After fill: ";
	printArray(SIZE2, arr2);

	// Task 3
	const int SIZE3 = 5;
	int arr3[SIZE3] = {1, 1, 1, 2, 1};
	int balance = checkBalance(SIZE3, arr3);
	if (balance) {
		cout << "Balance: ";
		printArray(SIZE3, arr3, balance);
	} else {
		cout << "Balance not found..." << endl;
	}

	// Task 4
	const int SIZE4 = 7;
	const int OFFSET = 3;
	int arr4[SIZE4] = {14, 21, 32, 45, 10, 54, 81};
	cout << "Offset array on " << OFFSET <<  " positions:" << endl;
	cout << "Before offset: ";
	printArray(SIZE4, arr4);
	offsetArray(SIZE4, OFFSET, arr4);
	cout << "After offset:  ";
	printArray(SIZE4, arr4);

	return 0;
}

void printArray(const int size, const int* arr, const int balance) {
	for (int i = 0; i < size; i++) {
		if (i > 0) {
			cout << (i == balance ? ", || " : ", ");
		}
		cout << *(arr + i);
	}
	cout << endl;
}

void invertArray(const int size, int* arr) {
	for (int i = 0; i < size; i++) {
		*(arr + i) = !*(arr + i);
	}
}

void fillArray(const int size, const int step, int* arr) {
	*(arr) = 1;
	for (int i = 1; i < size; i++) {
		*(arr + i) = *(arr + (i - 1)) + step;
	}
}

int sumArray(const int limit, const int* arr) {
	int sum = 0;
	for (int i = 0; i < limit; i++) {
		sum += *(arr + i);
	}

	return sum;
}

int checkBalance(const int size, const int* arr) {
	int balance = 0, sum = 0, all = sumArray(size, arr);
	if (size > 1) {
		for (int i = 1; i < size; i++) {
			sum = sumArray(i, arr);
			if (sum == all - sum) {
				balance = i;
				break;
			}
		}
	}

	return balance;
}

void offsetArray(const int size, int offset, int* arr) {
	offset = (offset < 0) ? size - offset : offset;
	if (offset > 0) {
		int tmp;
		for (int step = 0; step < offset; step++) {
			tmp = *(arr);
			for (int i = 0; i < size - 1; i++) {
				*(arr + i) = *(arr + i + 1);
			}
			*(arr + size - 1) = tmp;
		}
	}
}
