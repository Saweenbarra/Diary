#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream input("../Diary.csv");
	if (!input) cerr << "Could not open the file!" << endl;

	ifstream myFile;
	myFile.open("../Diary.csv");

	while (myFile.good()) {
		string line;
		getline(myFile, line, ',');
		cout << line << endl;
	}
	std::cin.get();
	myFile.close();
}