﻿// ex3.cpp : Defines the entry point for the console application.
//

//PT -- 17/20

#include "stdafx.h"
#include <iostream>
using namespace std;

class EvenNumber
{
public:
	//PT -- make these private
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

	//PT -- int getValue() { ... }
	// -1
	int getValue(int value)
	{
		return value;
	}
	
	//PT -- use the member variable:
	// -1
	/*
	int getNext() {
		return value + 2;
	}
	*/
	int getNext(int value)
	{
		if (value % 2 != 0)
			next = value + 1;
		else
			next = value + 2;
		return next;
	}
	//PT -- use the member variable:
	// -1
	/*
	int getPrevious() {
		return value - 2;
	}
	*/
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

