#include <iostream>
#include <fstream>
#include "txt.hpp"


void Entry::write (int count, char* date, char** word)
{
	std::ofstream file;
	file.open("../Diary.txt", std::ios_base::app);
	file << date << ":";
	for(int i=0; i<count; i++)
	{
		file << *word;
		if(i==count-1) break;
		file << " ";
		word++;
	}
	file << std::endl;
	file.close();
}