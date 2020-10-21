// Problem8LargestProductInASeries.cpp : Defines the entry point for the console application.
/*
The four adjacent digits in the 1000-digit number that have the greatest product are 9 � 9 � 8 � 9 = 5832.

73167176531330624919225119674426574742355349194934
96983520312774506326239578318016984801869478851843
85861560789112949495459501737958331952853208805511
12540698747158523863050715693290963295227443043557
66896648950445244523161731856403098711121722383113
62229893423380308135336276614282806444486645238749
30358907296290491560440772390713810515859307960866
70172427121883998797908792274921901699720888093776
65727333001053367881220235421809751254540594752243
52584907711670556013604839586446706324415722155397
53697817977846174064955149290862569321978468622482
83972241375657056057490261407972968652414535100474
82166370484403199890008895243450658541227588666881
16427171479924442928230863465674813919123162824586
17866458359124566529476545682848912883142607690042
24219022671055626321111109370544217506941658960408
07198403850962455444362981230987879927244284909188
84580156166097919133875499200524063689912560717606
05886116467109405077541002256983155200055935729725
71636269561882670428252483600823257530420752963450

Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?*/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main()
{
	string line;
	string numberList = "";
	int input;
	ifstream myfile("NumberList.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
			numberList += line;

		}
		myfile.close();
	}
	int length = 0;
	length = numberList.length();

	//int* numbers = new int[length];
	long int numbers[1000];
	
	for (int start = 0; start < length; start++)
	{
		numbers[start] = (long)numberList.at(start)-48;
		cout << numbers[start] << '\t';
	}
	int isEnd = false;
	int sNum = 0; //start Number
	int eNum = 4; //end number start+4;
	int positionMax = 0;
	int startPosition = 0;
	int storedNumbers[4];
	 long int product = 0;
	 long int productMax = 0;
	
	while (!isEnd)//will be true when startPositon+13 reaches 1000
	{
		if (startPosition + 13 < 1000)
		{
			product = long(numbers[startPosition] * numbers[startPosition + 1] * numbers[startPosition + 2] * numbers[startPosition + 3] *
				numbers[startPosition + 4] * numbers[startPosition + 5] * numbers[startPosition + 6] * numbers[startPosition + 7] * numbers[startPosition + 8] * numbers[startPosition + 9]
				* numbers[startPosition + 10] * numbers[startPosition + 11] * numbers[startPosition + 12]);
		}
		else {
			isEnd = true;
		}
		if (product > productMax)
		{
			productMax = product;
		}
		startPosition++;
	}
	//INTEGER OVERFLOW!
	cout << "\nThe max product of 13 series of numbers = " << productMax << endl;
	
	cin >> input;
	
    return 0;
}

     