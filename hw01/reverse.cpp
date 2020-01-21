/*
 * reverse.cpp
 * 
 * Copyright 2020 Abhi D. R. <adevalap@uncc.edu>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 */

#include <iostream>
#include <string>

using namespace std;
void reverseString(string in_str);

int main(void){
	string str1 = "Hello World!";
	string str2 = "racecar";
	string str3 = "a man a plan a canal-panama";
	string str4 = " ";

	reverseString(str1);
	cout << endl;
	reverseString(str2);
	cout << endl;
	reverseString(str3);
	cout << endl;
	reverseString(str4);
	return 0;
}
void reverseString(string in_str){
	string currentString = in_str;
	string reversedString = "";
	string testing = "assd";

	int stringLength = currentString.length();

	for(int i = stringLength; i>=0; i--){
		reversedString += currentString[i];
	}
	cout << reversedString << endl;
}
