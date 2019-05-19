#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{

 	int i, n=10, inp[10];
 	float total=0, average;
 	
 	cout << setprecision(2) << fixed << showpoint;
 	
 	for (i = 0; i < 10; i++)
	{
		cout << " Please enter an integer " << i+1 << endl;
		cin >> inp[i]; 
	}
	
	for (i = 0; i < n; i++)
	{
		total = total + inp[i];
	}	
	cout << " Sum of all integers is = " << total << endl;

	average = total/10;
	cout << "Average of all the integers is = " << average << endl;
	
	for (i = 1; i < n; ++i)
	{
		if (inp[0] > inp[i])
			inp[0] = inp[i];
	}
	cout << " Smallest integer is = " << inp[0] << "\n" << endl; 
	
	for (i = 1; i < n; ++i)
	{
		if (inp[0] < inp[i])
			inp[0] = inp[i];
	}
	cout << "Largest integer is = " << inp[0] << "\n" << endl;
	
	getch();
	return 0;
}
