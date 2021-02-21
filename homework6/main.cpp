#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void createFile(const char*, const char*);
string readFile(const char*);
void mergeFiles(const char*, const char*, const char*);
bool findInFile(const char*, const char*);

int main(int argc, const char** argv) {

	const char* name1 = "text1.txt";
	const char* name2 = "text2.txt";
	const char* name3 = "text3.txt";

	// Task 1
	const char* text1 = "Laughing mistress be change high busy resolved esteem her followed settled share matter unsatiable";
	createFile(name1, text1);
	const char* text2 = "Manner described vexed then produce especially esteems knew mention man delicate stuff attempt";
	createFile(name2, text2);

	// Task 2
	mergeFiles(name1, name2, name3);

	// Task 3
	if (argc >= 3) {
		cout << "Word '" << argv[2] << "' is ";
		cout << (findInFile(argv[1], argv[2]) ? "" : "not ") << "found in " << argv[1]; 
	} else {
		cout << "Too few arguments..." << endl;
		cout << "Format to search in file: ./main.cpp file_name search_word";
	}

	return 0;
}

void createFile(const char* name, const char* text) {
	ofstream fos(name);
	fos << text;
	fos.close();
}

string readFile(const char* name) {
	string text, word, delim;

	ifstream fis(name);
	while(!fis.eof()) {
		fis >> word;
		text += delim + word;
		delim = " ";
	}
	fis.close();

	return text;
}

void mergeFiles(const char* name1, const char* name2, const char* name3) {
	const string text1 = readFile(name1) + " ";
	const string text2 = readFile(name2);
	const int size = text1.length() + text2.length() + 1;
	
	char* buff = new char[size];
	strcpy(buff, text1.c_str());
	strcat(buff, text2.c_str());
	
	createFile(name3, buff);

	delete [] buff;
}

bool findInFile(const char* name, const char* text) {
	bool result = false;
	string word;
	string str(text);

	ifstream fis(name);
	while(!fis.eof()) {
		fis >> word;
		if (word == text) {
			result = true;
			break;
		}
	}
	fis.close();

	return result;
}
