// program 1


// Header files
#include <iostream>
using namespace std;

void display();
int calc(int, int);

void display()
{
	int x, y;

	cout << "\nEnter in 2 numbers and I'll add them together\n";
	cout << "Enter in first number: ";
	cin >> x;

	cout << "\nEnter in second number: ";
	cin >> y;

	calc(x, y);
}

int calc(int a, int b)
{
	int z;

	z = a+b;

	cout << "\n\nAnswer is : " << z;

	return z;
}

int main()
{
	display();	

	return 0;
}