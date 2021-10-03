// program 1

// Header files
#include <iostream>
using namespace std;

// Function prototypes
void display();
int calc(int, int);

// display function
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

// calculation function
int calc(int a, int b)
{
	int z;

	z = a+b;

	cout << "\n\nAnswer is : " << z;

	return z;
}

// main driver
int main()
{
	display();	

	return 0;
}
