#include <iostream>
#include <unistd.h>
#include "CSV.hpp"

int main(int argc, char* argv[]) {
	int opt;
	bool flag_fail = true;
	bool write = false;
	if(argc==1){
		std::cout << "Usage: ./Diary -w <date> <text>" << std::endl;
		return 0;
	}
	else{

		while((opt = getopt(argc, argv, "w:"))!=-1){
			flag_fail = false;
			switch (opt){
				case 'w': write = true; break;
				default: std::cout << "Usage: ./Diary -w <date> <text>" << std::endl;
			}
		}
		if(flag_fail){
			std::cout << "Usage: ./Diary -w <date> <text>" << std::endl;
		}
		if(write){
			Entry entry;
			bool success = entry.write(argc-3,argv[2], argv+3);
		}
	}

	return 0;
}