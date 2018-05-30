// ex3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class EvenNumber
{
public:
	int value;
	int next;
	int previous;

	EvenNumber()
	{
		value = 0;
	}
	EvenNumber(int v)
	{
		value = v;
	}

	int getValue(int value)
	{
		return value;
	}
	int getNext(int value)
	{
		if (value % 2 != 0)
			next = value + 1;
		else
			next = value + 2;
		return next;
	}
	int getPrevious(int value)
	{
		if (value % 2 != 0)
			previous = value - 1;
		else
			previous = value - 2;
		return previous;
	}

};




int main()
{
	EvenNumber num1;
	cout << "value: " << num1.getValue(16) << endl;
	cout << "next: " << num1.getNext(16) << endl;
	cout << "previous: " << num1.getPrevious(16) << endl;

    return 0;
}

