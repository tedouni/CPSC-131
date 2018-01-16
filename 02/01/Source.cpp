//Tayseer Edouni
//WRITTEN AND COMPILED ON XCODE

#include <iostream>
#include <iomanip>

using namespace std;

class POINT
{
private: float x, y;
public:
	POINT();		//constructor set x,y to zero

	friend void DrawRect();	//draw rectangle , not particular to any object

	void ReadXY(char vertex); // read the x and y coordinate of each vertex

	friend void Display(POINT p, char vertex); // display the x and y of each vertex

	friend float Distance(POINT p, POINT q); //compute the distance between each vertices p(x,y,) and q(x,y)

	friend void Display(float AB, float AC, float CD, float BD); //computes and displays the perimeter of ABCD

	~POINT(){ }
};



void DrawRect()
{
	cout << "For rectangle: \n";

	cout << "		A-----------------B\n";
	cout << "		|                 |\n";
	cout << "		|                 |\n";
	cout << "		|                 |\n";
	cout << "		C-----------------D\n";
}



void Display(POINT p, char vertex)
{
	cout << fixed << setprecision(2);
	cout << vertex << "(" << p.x << "," << p.y << ")";

}


float Distance(POINT p, POINT q)
{

	if (p.y == q.y)
		return q.x - p.x;
	else
		return p.y - q.y;
}

void Display(float AB, float AC, float CD, float BD)
{
	float perimeter = AB + AC + CD + BD;
	cout << "Perimeter: " << perimeter << endl;

}

int main(void)
{

	POINT a, b, c, d;
	DrawRect();
	cout << endl;
	cout << endl;

	a.ReadXY('A');
	b.ReadXY('B');
	c.ReadXY('C');
	d.ReadXY('D');

	cout << "For rectangle with coordinates:";
	Display(a, 'A');
	cout << ", ";
	Display(b, 'B');
	cout << ", ";
	Display(c, 'C');
	cout << ", ";
	Display(d, 'D');
	cout << endl;
	cout << endl;

	float AB = Distance(a, b);
	float AC = Distance(a, c);
	float CD = Distance(c, d);
	float BD = Distance(b, d);

	cout << "\tAB=" << AB << endl;
	cout << "\tAC=" << AC << endl;
	cout << "\tCD=" << CD << endl;
	cout << "\tBD=" << BD << endl;
	cout << endl;
	Display(AB, AC, CD, BD);

	return 0;
}

POINT::POINT()
{
	x = 0;
	y = 0;
}


void POINT::ReadXY(char vertex)
{
	float a, b;
	cout << "Enter the x and y coordinates of vertex " << vertex << ": ";
	cin >> a >> b;
	x = a;
	y = b;
}



