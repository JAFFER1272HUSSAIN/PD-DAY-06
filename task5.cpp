#include<iostream>
using namespace std;

float price(string, string, float);
int main()
{
	string f, d;
	float q;
	cout << "Enter name of fruit: ";
	cin >> f;
	cout << "Enter name of the day: ";
	cin >> d;
	cout << "Enter quantity: ";
	cin >> q;
	float p = price(f, d, q);
	cout << p;
}
float price(string f, string d, float q)
{
	float p;
	if (d == "Monday" || d == "Tuesday" || d == "Wednesday" || d == "Thursday" || d == "Friday")
	{
		if (f == "banana")
		{
			p = q * 2.50;
		}
		else if (f == "apple")
		{
			 p = q * 1.20;
		}
		else if (f == "orange")
		{
			 p = q * 0.85;
		}
		else if (f == "grapefruit")
		{
			 p = q * 1.45;
		}
		else if (f == "kiwi")
		{
			 p = q * 2.70;
		}
		else if (f == "pineapple")
		{
			 p = q * 5.50;
		}
		else if (f == "grapes")
		{
			 p = q * 3.85;
		}
	}
	else if(d == "Sunday" || d == "Saturday")
	{
		if (f == "banana")
		{
			 p = q * 2.70;
		}
		else if (f == "apple")
		{
			 p = q * 1.25;
		}
		else if (f == "orange")
		{
			 p = q * 0.90;
		}
		else if (f == "grapefruit")
		{
			 p = q * 1.60;
		}
		else if (f == "kiwi")
		{
			 p = q * 3.00;
		}
		else if (f == "pineapple")
		{
			 p = q * 5.60;
		}
		else if (f == "grapes")
		{
			 p = q * 4.20;
		}
	}
	return p;
}