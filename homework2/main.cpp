#include <iostream>

using namespace std;

int main(int argc, char** args) {
    
    // Task 1
    int intVar = 10;
    float floatVar = 1.8;
    char charVar = 'A';
    int array[3] = {1, 2, 3};

    cout << "int = " << intVar << endl;
    cout << "float = " << floatVar << endl;
    cout << "char = " << charVar << endl;
    cout << "array of int:" << endl;
    for (int i = 0; i < 3; ++i) {
    	cout << "array[" << i << "] = " << array[i] << endl;
    }

	// Task 2
    typedef enum {Empty, Zero, Cross} Values;

    // Task 3
    Values arr[5] = {Empty};

    // Task 4
    const int SIZE = 3;
    typedef struct {
    	Values fields[SIZE][SIZE];
    	string players[2];
    } TicTacToe;

    // Init
    TicTacToe game = {{}, {"Vasya", "Petya"}};
    for (int i = 0; i < SIZE; ++i) {
	    for (int j = 0; j < SIZE; ++j) {
	    	game.fields[i][j] = Empty;
	    }	
    }

    // Output
    for (int i = 0; i < SIZE; ++i) {
	    for (int j = 0; j < SIZE; ++j) {
	    	cout << "Game fields[" << i << "][" << j << "] = " << game.fields[i][j] << endl;
	    }	
    }
    for (int i = 0; i < 2; ++i) {
	    cout << "Player " << i << " = " << game.players[i] << endl;
	}
    
    return 0;
}
