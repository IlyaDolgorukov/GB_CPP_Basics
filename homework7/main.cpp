#include <iostream>

using namespace std;

#define INRANGE(NUM, MAX) (((NUM) >= 0) && ((NUM) < (MAX)))
#define ELEMENT(ARR, IND1, IND2) (*(*((ARR) + (IND1)) + (IND2)))
#define ARRSIZE(ARR, TYPE) (sizeof(ARR) / sizeof(TYPE)) 

int main(int argc, const char** argv) {

	// Task 1
	int num1 = 5, num2 = 10;
	cout << num1 << " is " << (INRANGE(num1, num2) ? "in" : "not in") << " range 0-" << num2 << endl;

	// Task 2
	int ind1 = 1, ind2 = 2;
	int arr1[4][4] = {
		{12, 45, 23, 87},
		{27, 25, 18, 96},
		{93, 35, 65, 132},
		{16, 56, 233, 10}
	};
	cout << "arr1[" << ind1 << "][" << ind2 << "] = " << ELEMENT(arr1, ind1, ind2) << endl;

	// Task 3
	int arr2[20];
	cout << ARRSIZE(arr2, int) << endl;

	return 0;
}
