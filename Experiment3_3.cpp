#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
	int size, x, y, temp;
	char arr[100];
	cout << "Please enter the size of the array: ";
	cin >> size;
	cout << "\nEnter the " << size << " Characters: ";
	for(x=0; x<size; x++)
	{
		cin >> arr[x];
	}
	
	y = x - 1;
	x = 0;

	while(x<y)
	{
		temp = arr[x];
		arr[x] = arr[y];
		arr[y] = temp;
		x++;
		y--;
	}

	cout<<"\nThe reverse order is : ";
	for(x=0; x<size; x++)
	{
		cout << arr[x]<<" ";
	}
	getch();
	return 0;
}
