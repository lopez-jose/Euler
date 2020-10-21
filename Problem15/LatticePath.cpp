// Problem15LatticePath.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;




int main()
{
	cout << "Input the length of side of square grid" << endl;
	int input;
	cin >> input;
	
	int total = 0;
	//if length == 1;
	total = ((input - 1) * 2);
	for (int i = 0; i < input; i++)
	{
		total += (input * 2);
	}
	
	cout << "Number of lattice Paths" << total << endl;

	
	int pause;
	cin >> pause;
    return 0;
}

