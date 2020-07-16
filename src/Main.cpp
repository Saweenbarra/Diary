#include <iostream>
#include "CSV.hpp"

using namespace std;

int main(int argc, char* argv[]) {
	
	if(argc==1){
		cout << "Usage: ./Diary add <date> <text>" << endl;
	}
	else{
		Entry entry;
		bool success = entry.write(argv[1], argv[2]);
	}

	return 0;
}