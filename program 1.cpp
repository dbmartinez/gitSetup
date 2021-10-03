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
	// variables
	int x, y;

	// display prompt/obtain user input1
	cout << "\nEnter in 2 numbers and I'll add them together\n";
	cout << "Enter in first number: ";
	cin >> x;

	// obtain user input2
	cout << "\nEnter in second number: ";
	cin >> y;

	// send user input to cacl() function
	calc(x, y);
}

// calculation function
int calc(int a, int b)
{
	// variables
	int z;

	// add both integers
	z = a+b;

	// show calculation
	cout << "\n\nAnswer is : " << z;

	return z;
}

// main driver
int main()
{
	// call display function
	display();	

	return 0;
}
