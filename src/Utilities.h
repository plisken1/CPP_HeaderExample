/*
 * Utilities.h
 *
 *  Created on: 6 Jun 2020
 *      Author: plisken
 */

#ifndef UTILITIES_H_
#define UTILITIES_H_
#include <iostream>
using namespace std;

string getInput(string text, bool newLine=false)
{
	string answer;
	if (newLine)
	{
		cout << text<<endl;
	}
	else
	{
		cout << text;
	}
	cin >> answer;
	return answer;
}
void print(string text, bool newLine=false)
{
	if (newLine)
	{
		cout << text<< endl;
	}
	else
	{
		cout << text;
	}
}




#endif /* UTILITIES_H_ */
