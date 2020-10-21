// Problem4PalindromeProduct.cpp : Defines the entry point for the console application.
/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 ◊ 99.

Find the largest palindrome made from the product of two 3-digit numbers.*/

#include <iostream>
#include <string>
using namespace std;



int main()
{
	int pause;
	int number = 0;
	int largestPalindrome = 0;
	//First we have to make something that figures out the factors of all number
	//int product[100][100];
	for (int row = 1000; row > 100; row--)
	{
		for (int column = 1000; column > 100; column--)
		{
			number = row*column;
			//product[row][column] = number;
			
			string alpha = std::to_string(number);
			string reversed(alpha.rbegin(), alpha.rend());
			
			if (alpha.compare(reversed) == 0)
			{
				if (number > largestPalindrome)
				{
					largestPalindrome = number;
				}
			}
			
				
			//cout << product[row][column] << '\t';

		}
		//cout << endl;
	}
	
	cout << "Largest Palindrome = " << largestPalindrome << endl;
	cin >> pause;
    return 0;
}

