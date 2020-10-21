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