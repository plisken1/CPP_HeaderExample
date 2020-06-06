//============================================================================
// Name        : CPP_HeaderExample.cpp
// Author      : Harry Nisbet
// Version     : 1.2
// Copyright   : Your copyright notice
// Description : An example of creating and using a Header
//============================================================================

#include <iostream>
#include "Utilities.h"
using namespace std;


int main()
{
	string a="harry";

	cout << "!!!Hello World!!! " << a.length() << endl; // prints !!!Hello World!!!
	string name = getInput("What is your name?");
	print( "Your name is "+name,true);
	print("next line");
	return 0;
}
