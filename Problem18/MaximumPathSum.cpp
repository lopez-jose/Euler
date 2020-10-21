// Problem18-MaximumPathSumI.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include<fstream>
#include <string>	
using namespace std;

int height = 0; 
const int width = 15;
int store[width][width] = { 0 };
void printOut()
{
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			cout << store[i][j];
		}
		cout << endl;
	}
}
void storeNumber(string input)
{
	string temp = "";
	for (int i = 0; i < input.length(); i++)
	{
		char s = input[i];
		// so we get the char

	}

}
int main()
{
	string line;
	ifstream myfile("numbers.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
			height++; //here you find the height;
		}
		myfile.close();
	}
	else cout << "Unable to open file";
	
	
	//First find the height of the pyramid.
	cout << "The height of the pyramid = " << height << endl;
	


	int pause;
	cin >> pause;
    return 0;
}

