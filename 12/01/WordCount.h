#pragma once
#include <iostream> 
#include <string> 
#include <iomanip> 
#include <algorithm> 

using namespace std;

class WordCount
{
private:
	struct NODE
	{
		int wordFreq;
		string wordValue;
		NODE *next;
	};

	NODE* list; 

public:
	WordCount();
	friend string toUpper(string word);
	void insert(string word);
	void displayWords();
	friend string removePunct(string word);

};
