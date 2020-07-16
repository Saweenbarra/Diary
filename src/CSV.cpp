#include <iostream>
#include <fstream>
#include "CSV.hpp"

using namespace std;


bool Entry::write (char* date, char* text){
	ofstream file;
	file.open("../Diary.csv", ios_base::app);
	file << date << "," << text << endl;
	file.close();
	return true;
}
