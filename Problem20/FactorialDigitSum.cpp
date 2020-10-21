// Problem20FactorialDigitSum.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
const int sizeOf = 100;
int series[sizeOf] = { 0 };
int holder[1000] = { 0 };
void printOut()
{
	for (int i = 0; i < sizeOf; i++)
	{
		cout << series[i];
	}
	cout << "\n\n\n" << endl;
}

int main()
{
	for (int i = 1; i <= sizeOf; i++)
	{
		series[i - 1] = i;
	}

	printOut();
	int pause;
	cin >> pause;
    return 0;
}

