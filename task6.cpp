#include<iostream>
using namespace std;
float studio(string, int);
float apartment(string, int);
int main()
{
	string month;
	int n;
	cout << "Enter month: ";
	cin >> month;
	cout << "Enter number of stays: ";
	cin >> n;
	float s, a;
	s = studio(month , n);
	a = apartment(month , n);
	cout << "Studio = " << s << endl;
	cout << "Apartment = " << a << endl;
}
float studio(string m, int n)
{
	float price , dis;
	if (m == "May" || m == "October")
	{
		if (n > 7 && n <=14)
		{
			price = n * 50;
			dis = price * 0.05;
			price = price - dis;
		}
		else if (n > 14)
		{
			price = n * 50;
			dis = price * 0.3;
			price = price - dis;
		}
		else
		{
			price = n * 50;
		}
	}
	else if (m == "June" || m == "September")
	{
		 if (n > 14)
		 {
			 price = n * 75.20;
			 dis = price * 0.2;
			 price = price - dis;
		 }
		 else
		 {
			price = n * 75.20;
		 }
	}
	else if (m == "July" || m == "August")
	{
		price = n * 76;
	}
	return price;
}
float apartment(string m, int n)
{
	float p, d;
	if (n > 14)
	{
		p = n * 65;
		d = p * 0.10;
		p = p - d;
	}
	else if (m == "May" || m == "October")
	{
		p = n * 65;
	}
	else if (m == "June" || m == "September")
	{
		p = n * 68.70;
	}
	else if (m == "July" || m == "August")
	{
		p = n * 77;
	} 
	return p;
}