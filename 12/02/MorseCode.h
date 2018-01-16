#pragma once
#include <string>
#include <iostream>
using namespace std;

class MorseCode
{
private:
    

	struct NODE
	{
		string code;
		char letter;
		NODE *next;

	};
    
	NODE* list;

public:
	MorseCode();
	void insert(string code, char letter);
	void print();
	char translate(string code);
	string translate(char letter);
};


