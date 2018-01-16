#include <iostream>
#include <fstream>
#include "WordCount.h"
#include <string> 

using namespace std;

int main()
{
	WordCount WORDS;
	string filename = "data.txt";
	fstream inputFile;
	inputFile.open(filename, ios::in);
	while (!inputFile.eof())
	{
		string word;
        cout<<word;
		inputFile >> word;
		WORDS.insert(word);
	}
	WORDS.displayWords();

	return 0;
}
