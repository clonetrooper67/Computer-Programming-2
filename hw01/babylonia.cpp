/*
 * babylonia.cpp
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
#include <cmath>

using namespace std;

//Funtion prototype
double takeInput();
double squareRoot(double userInput);
double calculatePctErr(double approximation, double userInput);
void outputValues(double approximation, double userInput, double pctErr);

int main(void){
	double input, guess, pcErr;
	input = takeInput();
	guess = squareRoot(input);
	pcErr = calculatePctErr(guess, input);
	outputValues(guess, input, pcErr);
	
	return 0;
}

//Function that takes user input to calculate an approximate square root
double takeInput(){
	//Your code goes here
}

/*Function that calculates an approximation of a square root using the 
Babylonian method
*/
double squareRoot(double userInput){
	//Your code goes here
}

//Function that calculates the percent error in the approximation
double calculatePctErr(double approximation, double userInput){
	//Your code goes here
}

/*Function that outputs the approximation and actual square root
values and percent error value.
*/
void outputValues(double approximation, double userInput, double pctErr){
	//Your code goes here
}

