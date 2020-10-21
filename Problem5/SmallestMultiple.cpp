// Problem5SmallestMultiple.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;


int main()
{
	int answer = 2520;
	int number = 1;
	int smallestMultiple = 0;
	bool isMultiple= false;
	int count = 0;
	int pause;
	int list[12] = {2,3,11,12,13,14,15,16,17,18,19,20};


	// if a number is divisible by 20, then it is also divisible by 10 and 2, so then we only have to check 20
	// if divisible by 18 then it is also divisible by 9 and 2
	while(!isMultiple)
	{
		//here we will go through a number and find the divisible value;
		for (int start = 0; start < 12; start++)
		{
			if (number% list[start] == 0)
			{
				count++;
				//cout << "\n\n\nCount = " << count << "\t Number = " << number;
			}
		}

		if (count >= 12)
		{
			smallestMultiple = number;
			isMultiple = true;
			cout << "\n\n\nCount = " << count << "\t Number = " << number << endl;
		}
		count = 0;
		//cout << number << endl;
		number++;
	}
	cout << smallestMultiple << endl;
	cin >> pause;
    return 0;
}

