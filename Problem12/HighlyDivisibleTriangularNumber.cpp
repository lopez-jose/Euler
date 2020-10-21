// Problem12HighDivisibleTriangularNumber.cpp : Defines the entry point for the console application.
/*
The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Let us list the factors of the first seven triangle numbers:

1: 1
3: 1,3
6: 1,2,3,6
10: 1,2,5,10
15: 1,3,5,15
21: 1,3,7,21
28: 1,2,4,7,14,28
We can see that 28 is the first triangle number to have over five divisors.

What is the value of the first triangle number to have over five hundred divisors?*/


#include <iostream>
using namespace std;


int main()
{

	int divisorCount = 0;
	int natural = 0;
	int limit = 2;
	bool isOver = false;
	int factorCount = 1;
	int count = 0;
	while (!isOver)
	{
		
		for (int i = 1; i < limit; i++)
		{
			natural +=i;
			//cout << natural << endl;
		}
		limit++;
		int j = (natural / 2);
		//cout << j << " natural = " << natural << endl;
		for (int i = natural/2;i>0; i--)
		{
			if (natural%i == 0)
			{
				factorCount++;
				if (factorCount > 500)
				{
					cout << natural << endl;
					isOver = true;
					

				}
				if (factorCount > 500)
				{
					int i;
					cout << "FactorCount = " << factorCount << endl;
					cin >> i;
				}
				
				
				
			}
		}
		count++;
		factorCount = 1;
		//cout << natural << endl;
		
		natural = 0;
	}
	
	int pause;
	cin >> pause;
    return 0;
}

