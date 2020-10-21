// Problem 14 LongestCollatz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

const int length = 20000;
int list[length] = { 0 };
int main()
{
	for (int i = 1; i < 20000; i++)
	{
		int isEnd = false;
		int count = 1;
		int num = i;
		while (!isEnd)
		{
			
			if (num % 2 == 0)
			{
				num = num / 2;
				count++;
			}
			else if(num!=1)
			{
				num = (3 * num) + 1;
				count++;
			}
			else {
				isEnd = true;
				//cout << i << " Number of terms = " << count << endl;
				list[i] = count;
			}
		}
	}
	for (int i = 0; i < 5000; i++)
	{
		//cout << list[i] << endl;
	}
	int maxCount = 0;
	int maxNumber = 0;
	
	for (int i = 1; i < 1000000; i++)
	{
		bool isEnd = false;
		int count = 1;
		long long num = i;
	
		while (!isEnd)
		{
			
			if (num < 20000 && num>0)
			{
				int j = list[num];
				if(j>0)
				count += j;
				isEnd = true;
			}
			else if (num % 2 == 0)
			{
				num = num / 2;
				count++;
			}
			else if (num != 1)
			{
				num = (3 * num) + 1;
				count++;
			}
			else {
				isEnd = true;
			}
		}
		if (count > maxCount)
		{
			maxCount = count;
			maxNumber = i;
		}
		
		if (i % 10000 == 0)
		{

			cout << "At Number \t" << i << "\tThe Max Number is still " << maxNumber << "\tMaxCount = " << maxCount << endl;
		}
	}
	cout << "MaxNumber chain under 1000000 = " << maxNumber << endl;
	
	int pause;
	cin >> pause;
    return 0;
}
























// Problem14LongestCollatzSequence.cpp : Defines the entry point for the console application.
/*
The following iterative sequence is defined for the set of positive integers:

n ? n/2 (n is even)
n ? 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 ? 40 ? 20 ? 10 ? 5 ? 16 ? 8 ? 4 ? 2 ? 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.

*/
/*Some thoughts on how to improve efficiency
	You are going through every number, so that's good
	But whenever you change the number by dividing it by 2 if even
	or 3num+1 if it's odd, you often go back to computing the same number
	So, what you could do is have a list of stored chainlengths, for numbers that you have already computed
	and whenver the current number is equal to that number, just get the chainlength int from already computed
	object
*/


#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;
int powerOfTwo[31];
int countOfLoops = 0;

int returnChainCount(int input)
{
	bool isOne = false;
	int chainCount = 1;
	int num = input;
	bool isPower = false;
	int count = 0;
	while (!isOne)
	{
		
		if (num == 1)
			return chainCount;
		
		
		




		if (num % 2 == 0)
		{
			
			for (int i = 0; powerOfTwo[i]<=num; i++)
			{
				
				
				countOfLoops++;
				if (num == powerOfTwo[i])
				{
					//cout << num << "\t is a power of two" << endl;
					return (chainCount + i);
				}
			}
			num = num / 2;
		}
		else {
			num = (3 * num) + 1;
		}
		chainCount++;
		countOfLoops++;

	}
}


int main()
{
	clock_t time;
	time = clock();
	for (int i = 0; i < 31; i++)
	{
		powerOfTwo[i] = (int)pow(2.0, i);
		cout << powerOfTwo[i] << endl;
	}
	const int limit = 999999;

	long long sum = 0;
	int num = 0;
	bool isOne = false;
	//int chainCount = 1;
	int maxChainCount = 0;
	int currentChain = 0;
	int maxNumber = 0;
	for (int start = 1; start <= limit; start++)
	{
		currentChain = returnChainCount(start);
		if (currentChain > maxChainCount)
		{
			maxChainCount = currentChain;
			maxNumber = start; 

		}
		if(start %50000== 0)
			cout << "Current number = " << start << "\t Current Chain = " << currentChain << endl;
		
	}


	cout << "Number = " << maxNumber << "\tChainCount = " << maxChainCount << endl;
	time = clock() - time;
	cout << "The time = " << time << "ms" << endl;
	cout << "Count of Loops=\t" << countOfLoops << endl;
	int pause; 
	cin >> pause;
    return 0;
}




/*


// Problem14!!.cpp : Defines the entry point for the console application.
//


#include <iostream>
using namespace std;
int list[10000] = { 0 };

int countPrime(int input)
{
	bool isOne = false;
	int chainCount = 1;
	int num = input;
	bool isPower = false;
	int count = 0;
	while (!isOne)
	{

		if (num == 1)
			return chainCount;
		if (num % 2 == 0)
		{

			num = num / 2;
		}
		else {
			num = (3 * num) + 1;
		}
		chainCount++;
	

	}
}
int alternative(int input)
{
	bool isOne = false;
	int chainCount = 1;
	int num = input;
	bool isPower = false;
	int count = 0;
	while (!isOne)
	{
		
		if (num == 1)
			return chainCount;
		for (int i = 0; i < 10000; i++)
		{
			if (num<10000)
			{
				int j = 0;
				j = list[num];
				return (chainCount + j);
			}
		}
		if (num % 2 == 0)
		{

			num = num / 2;
		}
		else {
			num = (3 * num) + 1;
		}
		chainCount++;


	}
}
int main()
{
	
	
	const int limit = 150000;
	

	long long sum = 0;
	int num = 0;
	bool isOne = false;
	//int chainCount = 1;
	int maxChainCount = 0;
	int currentChain = 0;
	int maxNumber = 0;
	for (int start = 1; start <= 10000; start++)
	{
		currentChain = countPrime(start);
		if (currentChain > maxChainCount)
		{
			maxChainCount = currentChain;
			maxNumber = start;

		}
		list[start - 1] = currentChain;
		
			

	}
	for (int i = 0; i < limit; i++)
	{
		
			int j = alternative(i);
			//cout << j << endl;
			if (i % 10000 == 0)
				cout << j << endl;
	}

	//cout << "Number = " << maxNumber << "\tChainCount = " << maxChainCount << endl;

	
	
	int pause;
	cin >> pause;
	return 0;
}

*/



























/*

// Problem14LongestCollatzSequence(REDO).cpp : Defines the entry point for the console application.
//


#include <iostream>	

using namespace std;


class Number {

int number, chainCount;

public:
int get_Chain_Count() { return chainCount; }
int get_Number() { return number; }
};





int chainCount(int input)
{
	bool isOne = false;
	int chainCount = 1;
	int num = input;
	bool isPower = false;
	int count = 0;
	while (!isOne)
	{

		if (num == 1)
			return chainCount;

		if (num % 2 == 0)
		{
			num = num / 2;
		}
		else {
			num = (3 * num) + 1;
		}
		chainCount++;


	}
}
int main()
{
	
	const int limit = 13;
	int num = 0;
	bool isNum = false;
	for (int start = 1; start <= limit; start++)
	{
		cout << start << "\t" << "Chain Length = " << chainCount(start) << endl;
	}
	int pause;
	cin >> pause;
	return 0;
}

*/