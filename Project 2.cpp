// Project 2.cpp : Defines the entry point for the console application.
//


#include "Sort.h"
#include <vector>
#include <iterator>
#include <iostream>
#include <string>


using namespace std;

int main()
{
	vector<char> vec1 = {'l','z','c','f','g','y'};
	vector<char> vec2 = {9,8,7,6,5,4,3,2,1,0};

	QuickSort(vec1);
	QuickSort(vec2);

	for (int i = 0; i < vec1.size(); i++)
	{
		cout << vec1[i] << endl;
	}

	for (int i = 0; i < vec2.size(); i++)
	{
		cout << vec2[i] << endl;
	}

	if (!BinarySearch(vec1, 'a'))
	{
		cout << "False" << endl;
	}
	else
	{
		cout << "True" << endl;
	}

	if (!BinarySearch(vec1, 'c'))
	{
		cout << "False" << endl;
	}
	else
	{
		cout << "True" << endl;
	}

	if (!BinarySearch(vec2, 10))
	{
		cout << "False" << endl;
	}
	else
	{
		cout << "True" << endl;
	}

	if (!BinarySearch(vec2, 7))
	{
		cout << "False" << endl;
	}
	else
	{
		cout << "True" << endl;
	}

    return 0;
}

