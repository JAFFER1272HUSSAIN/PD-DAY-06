#include<iostream>
using namespace std;
string activity(string temp, string hum);
int main()
{
	
	string temp, hum;
	string value;
	cout << "Enter temperature: ";
	cin >> temp;
	cout << "Enter Humidity: ";
	cin >> hum;
	value = activity(temp,hum);
	cout << value;
}
string activity(string temp, string hum)
{
	string val;
	if (temp == "warm")
	{
		if (hum == "dry")
		{
			val = "Play tennis";
		}
		else
		{
			val = "swim";
		}
	}
	else if (temp == "cold")
	{
		if (hum == "dry")
		{
			val = "Play basketball";
		}
		else
		{
			val = "Watch tv";
		}
	}
	return val;
}