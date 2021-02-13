#include <iostream>

using namespace std;

int main(int argc, char** args) {

	// Task 1
	int a = 12;
	int b = 7;
	int res = a + b;
	if (res >= 10 && res <= 20) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}

	// Task 2
	int num = 10;
	int d = 0;
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			d++;
		} 
	}
	cout << "Number " << num << " is " << (d == 2 ? "" : "not ") << "simple" << endl;

	// Task 3
	const int num1 = 8;
	const int num2 = 3;
	if (num1 + num2 == 10) {
		cout << "true" << endl;
	} else if (num1 == 10 && num2 == 10) {
		cout << "true" << endl;
	} else {
		cout << "false" << endl;
	}

	return 0;
}
