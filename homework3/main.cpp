#include "main.h"

using namespace std;

int main(int argc, char** args) {

	// Task 1 & 3
	cout << a * (b + (c * 1.0f / d)) << endl;

	// Task 2
	int num1 = 17;
	int num2 = 26;
	cout << (num1 > 21 ? (num1 - 21) * 2 : 21 - num1) << endl;
	cout << (num2 > 21 ? (num2 - 21) * 2 : 21 - num2) << endl;

	// Task 4
	int arr[3][3][3] = {
		{{12, 34, 45}, {23, 84, 12}, {24, 74, 20}},
		{{21, 43, 54}, {32, 48, 21}, {42, 47, 35}},
		{{15, 14, 74}, {22, 38, 91}, {32, 77, 82}}
	};
	cout << *(*(*(arr + 1) + 1) + 1) << endl;

	return 0;
}
