#include "MorseCode.h"



MorseCode::MorseCode()
{
	list = NULL;

}

void MorseCode::insert(string code, char letter)
{
	NODE *p = new NODE;
	p->code = code;
	p->letter = letter;
	p->next = list;
	list = p;
}


void MorseCode::print()
{
	NODE*p = list;
	while (p!=NULL)
	{
		cout << p->letter << " " << p->code << endl;
		p = p->next;
	}
}

char MorseCode::translate(string code)
{
	char letter;

	NODE* p = list;

	while (p!=NULL)
	{
		if (p->code == code)
		{
			letter = p->letter;
		}
		p = p->next;
	}

	return letter;
}
string MorseCode::translate(char letter)
{

	string code;
	NODE* p = list;

	while (p != NULL)
	{
		if (p->letter == letter)
		{
			code = p->code;
		}
		p = p->next;
	}

	return code;
}