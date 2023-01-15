2#include<iostream>
using namespace std;
string location(int, int, int);
int main()
{
	int h, x, y;
	cout << "Enter an integer that gives point: ";
	cin >> h;
	cout << "Enter x coordinates of the point: ";
	cin >> x;
	cout << "Enter y coordinates of the point: ";
	cin >> y;
	string loc;
    loc = location(h, x, y);
	cout << loc;
}
string location(int h, int x, int y)
{
	string res;
	if ((x >= 2 && x <= 4) && (y >= 0 && y <= 2))
	{
		res = "Inside";
	}
	if (y = 0 || x == y)
	{
		res = "Border";
	}
	else
	{
		res = "Outside";
	}
	return res;
}
