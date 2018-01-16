#include <iostream>
#include <string>
#include <cstring>
#include "MorseCode.h"
using namespace std;

struct TRANSLATION
{
	char letter;
	string code;

};



int main()
{
	
	TRANSLATION t[27] = { { 'A', ".-" }, { 'B', "-..." }, { 'C', "-.-." }, { 'D', "-.." }, { 'E', "." }, { 'F', "..-." }, { 'G', "--." }, { 'H', "...." },
	{ 'I', ".." }, { 'J', ".---" }, { 'K', "-.-" }, { 'L', ".-.." }, { ' ', "----" }, { 'N', "-." }, { 'O', "---" }, { 'P', ".--." }, { 'Q', "--.-" }, { 'R', ".-." },
	{ 'S', "..." }, { 'T', "-" }, { 'U', "..-" }, { 'V', "...-" }, { 'W', ".--" }, { 'X', "-..-" }, { 'Y', "-.--" }, { 'Z', "--.." } };

	MorseCode list;


	for (int i = 0; i < 27; i++)
	{
		list.insert(t[i].code, t[i].letter);
	}


	char toCont;
	string b;


	do
	{
		cout << "-------Translation's Office ------\n";
		cout << "1. From TEXT to MORSE code\n";
		cout << "2. From MORSE code to TEXT\n";
		int choice;
		cin >> choice;
		cin.ignore();
		cout << endl;
		if (choice == 1)
		{
			cout << "Enter words: ";
			
			getline(cin,b);
			for (int i = 0; i < b.length(); i++)
			{
				char a = b[i];
				a = toupper(a);
				string code = list.translate(a);
				cout << code << "/";
			}
			cout << endl;
		}
		
		else
		{
			cout << "Enter your message";

			/*Wasn't able to do this part. Wasted too much time on trying to implement this 
			problem with a binary tree that I ran out of time and decided to spend the rest of the time studying for the exam */


		}


		cout << "Continue (y/n)?: ";
		cin >> toCont;
	} while (toCont != 'n');
	
	return 0;
}