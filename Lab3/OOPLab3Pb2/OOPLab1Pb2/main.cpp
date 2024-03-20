#include "Canvas.h"
using namespace std;

int main()
{
	Canvas c(100, 100);
	c.DrawCircle(50, 50, 20, '#');
	c.FillCircle(50, 50, 20, '$');
	c.Print();
	c.Clear();
	c.DrawRect(20, 80, 70, 20, '|');
	c.FillRect(20, 80, 70, 20, '*');
	c.Print();
	c.Clear();
	c.SetPoint(70, 70, '?');
	c.DrawLine(10, 10, 50, 50, '$');
	c.Print();
	return 0;
}