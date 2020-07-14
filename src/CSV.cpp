#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void read_all(){
    ifstream input("../Diary.csv");
	if (!input) cerr << "Could not open the file!" << endl;
    ifstream myFile;
	myFile.open("../Diary.csv");

	while (myFile.good()) {
		string line;
		getline(myFile, line, ',');
		cout << line << endl;
	}
	myFile.close();
}
