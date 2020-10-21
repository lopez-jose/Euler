// Problem6SumSquareDifference.cpp : Defines the entry point for the console application.
/*The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 ? 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/


#include <iostream>
#include <cmath>
using namespace std;




int main()
{
	int pause;
	int sumNatural=0;
	int sumSquare = 0;
	for (int i = 0; i <= 100; i++)
	{
		sumNatural += (i*i);
	}
	for (int i = 0; i <= 100; i++)
	{
		sumSquare+= i;
	}
	sumSquare = (sumSquare*sumSquare);
	cout << sumNatural << endl;
	cout << sumSquare << endl;
	cout << "The difference between the sum of the square of the first hundred numbers and square of the sum = \n" << (sumSquare -sumNatural) << endl;
	cin >> pause;
    return 0;
}

