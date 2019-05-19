#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int i;
	double provA[7], provB[7], provC[7];
	
	for (i=0; i < 7; i++)
	{
		cout << "Specify the temperatures in Province A: " << endl;
		cout << "Day " << i+1 << endl;
		cin >> provA[i];
	}
	
	for (i=0; i < 7; i++)
	{
		cout << "Specify the temperatures in Province B: " << endl;
		cout << "Day " << i+1 << endl;
		cin >> provB[i];
	}
	
	for (i=0; i < 7; i++)
	{
		cout << "Specify the temperatures in Province C: " << endl;
		cout << "Day " << i+1 << endl;
		cin >> provC[i];
	}
	
	cout << endl;
	
	for (i=0; i < 7; i++)
	{
	cout << "The temperature in Province A, day " << i+1 << " :" << provA[i] << endl;
	}
	cout << endl;
	
	for (i=0; i < 7; i++)
	{
	cout << "The temperature in Province B, day " << i+1 << " :" << provB[i] << endl;
	}
	cout << endl;
	
	for (i=0; i < 7; i++)
	{
	cout << "The temperature in Province C, day " << i+1 << " :" << provC[i] << endl;
	}
	cout << endl;
	
	getch();
	return 0;
}
