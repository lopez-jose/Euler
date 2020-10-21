// Problem13LargeSum.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;

const int sizeOf = 200;
int stored[sizeOf] = { 0 };
int output[sizeOf] = { 0 };
const int inputLength = 50;
int fileList[inputLength] = { 0 };
void fixDigits()
{
	for (int i = sizeOf - 1; i >= 0; i--)
	{

		int digits = stored[i];

		int length = 1;
		int hold = digits;
		while (digits /= 10) //THIS DESTROYS DIGITS!!!
		{
			length++;
		}

		if (length == 2)
		{
			stored[i] = hold % 10;
			stored[i - 1] += hold / 10;
		}
	}

}
void printOut()
{
	for (int i = 0; i < sizeOf; i++)
	{
		cout << stored[i];
	}
	cout << endl;
}

void add()
{
	
	for (int i = (sizeOf - inputLength); i < sizeOf; i++)
	{
		stored[i] += fileList[i - (sizeOf - inputLength)];
	}
	fixDigits();
}

int main()
{
	string line;
	ifstream myfile("numbers.txt");
	for (int i = 0; i < 100; i++)// there are 100 numbers
	{
		getline(myfile, line);
		for (int i = 0; i < 50; i++) // this is for a single 50 digit number
		{
			fileList[i] = line[i] - 48;
			// here we only get one single number;
			
		}
		add();
		
		
	}
	printOut();
	cout << endl;
	int pause; 
	cin >> pause;
    return 0;
}

