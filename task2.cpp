#include<iostream>
using namespace std;
string grading(int);
int main()
{
	int marks;
	cout << "Enter marks: ";
	cin >> marks;
	string grade = grading(marks);
	cout << grade;
}
string grading(int marks)
{
	string grade;
	if (marks > 90 && marks <= 100)
	{
		grade = "A+";
	}
	if (marks > 80 && marks <= 90)
	{
		grade = "A";
	}
	if (marks > 70 && marks <= 80)
	{
		grade = "B+";
	}
	if (marks > 60 && marks <= 70)
	{
		grade = "B";
	}
	if (marks > 50 && marks <= 60)
	{
		grade = "C";
	}
	if (marks >= 40 && marks <= 50)
	{
		grade = "D";
	}
	if (marks < 40)
	{
		grade = "F";
	}
	return grade;
}