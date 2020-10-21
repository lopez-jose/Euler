// Problem7100001stPrime.cpp : Defines the entry point for the console application.
//


#include <iostream>
using namespace std;


bool isPrime(int number)
{
	for (int start = 2; start < number; start++)
	{
		if (number%start == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int pause;
	int number = 1;
	bool isLimit = false;
	int primeCount = 0;
	/*
	for (int start = 2; start < 100; start++)
	{
		cout << start << "\tPrime = " << isPrime(start) << endl;
	}*/
	while (!isLimit)
	{
		number++;
		if (isPrime(number))
		{
			
			primeCount++;
			if (primeCount == 10001)
			{
				isLimit = true;
			}
		}
		
	}
	cout << "The 10001st prime is" << number << endl;
	cin >> pause;
    return 0;
}


