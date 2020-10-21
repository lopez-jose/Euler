// Problem9PythagorenTriplet.cpp : Defines the entry point for the console application.
/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.*/

//Infinite Looping
#include <iostream>
#include <cmath>
using namespace std;




int main()
{
	int pause;
	double c = 0;
	c = 5; 
	cout << pow(c, 2.0) << endl;
	bool isTriple = false;
	double product = 0;
	double square = 0;
	double cSquare = 0;
	
	while (!isTriple)
	{
		for (int c = 998; c > 2; c--)
		{
			for (int b = 0; b < c - 2; b++)
			{
				for (int a = 0; a < c - 1; a++)
				{
					if (a + b + c == 1000)
					{
						product = pow(b, 2.0) + pow(a, 2.0);
						cSquare = pow(c, 2.0);
						if (product == cSquare)
						{
							cout << a*b*c << endl;
						}

					}
				}
			}
		}
	}
	//The max value of each is 1000 possible, since if a = 1000 then b and c have to equal 0 in order to solve a+b+c=1000
	

	cin >> pause;
    return 0;
}

