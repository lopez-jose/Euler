// Problem10SummationofPrimes.cpp : Defines the entry point for the console application.
/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.*/


#include <iostream>
//#include <cmath>
#include <math.h>

using namespace std;
/*
#define BELOW 2000000
int input;

int isaprime(int num);

int main(void) {

	int i;
	long long sum = 0;

	for (i = 2; i < BELOW; i++) {

		if (isaprime(i) == 1) {
			sum = sum + i;
			//printf("\n%d\t%.1f", i, sum);
		}
	}
	cout << sum << endl;
		cin >> input;
	
	return 0;
}

int isaprime(int num) {

	int i;

	for (i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return 0;
		}
		else {
			;
		}
	}

	return 1;
}
*/
int main()
{
	int pause;
	bool isPrime = true;
	long long primeSum = 0;
	
	
	
	for (int start = 2; start < 2000000; start ++)
	{
		double f = sqrt(start);
		for (int number = 2; number <= f; number++)
		{
			if (start % number == 0)
			{
				isPrime = false;
			}
		}
		if (isPrime == true)
		{
			primeSum += start;
			
			
			//cout << start << endl;
		}
		isPrime = true;
	}
	cout << "The sum of all primes= " << primeSum << endl;
	cin >> pause;
    return 0;
}

