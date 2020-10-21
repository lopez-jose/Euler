// Problem16PowerDigitSum.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;
const int sizeOf = 400;
int number[sizeOf] = { 0 }; // we create an array to hold the values of 2^n
//number[500] = 1;; // here we set the original value = to 
void fixDigits()
{
	for (int i = sizeOf - 1; i >= 0; i--)
	{

		int digits = number[i]; 					
								
		int length = 1;
		int hold = digits;
		while (digits /= 10) //THIS DESTROYS DIGITS!!!
		{
			length++;
		}
	
		if (length == 2)
		{
			number[i] = hold % 10;
			number[i - 1] += hold/10;
		}
	}


}
void computePower(int power)
{
	int mult = 2;
	for (int i = 0; i < power; i++)
	{
		for (int i = 0; i < sizeOf; i++)
		{
			number[i] = number[i] * 2; // so that calculates the new value, but may have a greater value than allowable such as 13 in a single place instead of 1 and 3
		}
		fixDigits();
		// then here call the fixDigits method


	}
}
void sum()
{
	int sum = 0;
	for (int i = 0; i < sizeOf; i++)
	{
		sum += number[i];
	}
	cout << sum << endl;
}

void printOut()
{
	for (int i = 0; i < sizeOf; i++)
	{
		cout << number[i];
	}
	cout << "\n\n\n\n";
}
int main()
{
	int power2 = 0;
	number[sizeOf-1] = 1; // here we set the rightmost digit to 1
	printOut();
	cout << "this program calculate 2^n" << endl;

	cout << "Enter the power of n that you want computed" << endl << "\n";
	cin >> power2;
	printOut();
	computePower(power2);
	printOut();
	sum();
	
	int pause; 
	cin >> pause;
    return 0;
}

