#include <iostream>
#include "txt.hpp"
#include "Option.hpp"

int main(int argc, char* argv[])
{
	
	int opt = determine_option(argc, argv);
	Entry entry;
	switch (opt)
	{
		case 'w': entry.write(argc-3,argv[2],argv+3); return 0;
		default: std::cout << "Usage: ./Diary -w <date> <text>" << std::endl;
	}
}