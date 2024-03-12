#include <iostream>
using namespace std; 

int main()
{
	int R = 1;
	while (R <= 4)
	{
		int C = 9;
		while (C >= 1)
		{
			cout << C << " ";
			C--;
		}
		R++;
		cout << endl;
	}
	
	for (int r=1; r<=4; r++)
	{
		for (int c=9; c>=1; c--)
		{
			cout << c << " ";
		}
		cout << endl;
	}
	for (int x = 1; x <= 12; x++)
	{
		cout << "Times Table for " << x << ":\n";
		cout << "==================\n\n"; 
		for (int y = 1; y <= 12; y++)
		{
			cout << y << " * " << x << " = " << x * y << endl; 
		}
	}
	int X = 1;
	while (X <= 12)
	{
		cout << "Times Table for " << X << ":\n";
		cout << "==================\n\n";
		int Y = 1; 
		while (Y <= 12)
		{
			cout << Y << " * " << X << " = " << X * Y << endl;
			Y++;
		}
		X++;
	}
}
