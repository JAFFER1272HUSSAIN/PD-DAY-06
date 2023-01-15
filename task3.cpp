#include<iostream>
using namespace std;
string sign(int, string);
int main()
{
	int d;
	string month;
	cout << "Enter Month: ";
	cin >> month;
	cout << "Enter Date: ";
	cin >> d;
	string z = sign(d, month);
	cout << z;
}
string sign(int d, string month)
{
	string z;
	if (month == "March" )
	{
		if (d >= 21 && d <= 31)
		{
			z = "Aries";
		}
		else if (d >= 1 && d <= 20)
		{
			z = "Pisces";
		}
	}
	if (month == "April")
	{
		if (d <= 19 && d >= 1)
		{
			z = "Aries";
		}
		else if (d >= 20 && d <= 30)
		{
			z = "Taurus";
		}
	}
	if (month == "May")
	{
		if (d <= 20 && d >= 1)
		{
			z = "Taurus";
		}
		else if (d >= 21 && d <= 31)
		{
			z = "Gemini";
		}
	}
	if (month == "June")
	{
		if (d <= 20 && d >= 1)
		{
			z = "Gemini";
		}
		else if (d >= 21 && d <= 30)
		{
			z = "Cancer";
		}
	}
	if (month == "July")
	{
		if (d <= 22 && d >= 1)
		{
			z = "Cancer";
		}
		else if (d >= 23 && d <= 31)
		{
			z = "Leo";
		}
	}
	if (month == "August")
	{
		if (d <= 22 && d >= 1)
		{
			z = "Leo";
		}
		else if (d >= 23 && d <= 31)
		{
			z = "Virgo";
		}
	}
	if (month == "September")
	{
		if (d <= 22 && d >= 1)
		{
			z = "Virgo";
		}
		else if (d >= 23 && d <= 30)
		{
			z = "Libra";
		}
	}
	if (month == "October")
	{
		if (d <= 22 && d >= 1)
		{
			z = "Libra";
		}
		else if (d >= 23 && d <= 31)
		{
			z = "Scorpio";
		}
	}
	if (month == "November")
	{
		if (d <= 21 && d >= 1)
		{
			z = "Scorpio";
		}
		else if (d >= 22 && d <= 30)
		{
			z = "Sagittarius";
		}
	}
	if (month == "December")
	{
		if (d <= 21 && d >= 1)
		{
			z = "Sagittarius";
		}
		else if (d >= 22 && d <= 31)
		{
			z = "Capricon";
		}
	}
	if (month == "January")
	{
		if (d <= 19 && d >= 1)
		{
			z = "Capricon";
		}
		else if (d >= 20 && d <= 31)
		{
			z = "Aquarius";
		}
	}
	if (month == "February")
	{
		if (d <= 18 && d >= 1)
		{
			z = "Aquarius";
		}
		else if (d >= 19 && d <= 28)
		{
			z = "Pisces";
		}
	}
	return z;
}