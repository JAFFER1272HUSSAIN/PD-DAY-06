#include<iostream>
using namespace std;
float bills(char, char, int);
int main()
{
	char code, time;
	int min;
	cout << "Enter which type of customer you are(Residential or Premium) press r or p: ";
	cin >> code;
	cout << "Enter D for day time and N for night time: ";
	cin >> time;
	cout << "Enter number of minutes you used the service: ";
	cin >> min;
	float p;
	p = bills(code, time, min);
	cout << p << "$";

}
float bills(char code, char time, int min)
{
	float b = 0;
	if (code == 'p')
	{
		b = 25;
		if (time == 'D' && min > 75)
		{
			b = (min * 0.10) + 25;
		}
		if (time == 'N' && min > 100)
		{
			b = (min * 0.05) + 25;
		}
	}
	if (code == 'r' && min > 50)
	{
		b = min * 0.20;
	}
	return b;
}