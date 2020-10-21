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
	int list[20] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	while(!isMultiple)
	{
		//here we will go through a number and find the divisible value;
		for (int start = 0; start < 20; start++)
		{
			if (number% list[start] == 0)
			{
				count++;
				//cout << "\n\n\nCount = " << count << "\t Number = " << number;
			}
		}

		if (count >= 20)
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

