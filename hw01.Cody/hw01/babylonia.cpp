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
#include <iomanip>

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
	double aux = 0;
	cout << "Please enter a value for input: ";
	cin >> aux;
	return aux;
}

/*Function that calculates an approximation of a square root using the
Babylonian method
*/
double squareRoot(double userInput){
	double guess = userInput / 2;

	for (int i = 0; i < 20; i++)
	{
		double root = userInput / guess;
		guess = (guess + root) / 2;
	//	cout << guess << endl;
	}

	return guess;

}

//Function that calculates the percent error in the approximation
double calculatePctErr(double approximation, double userInput){
	double actualValue = sqrt(userInput);
	double error = abs(approximation - actualValue) * 100/actualValue;

}

/*Function that outputs the approximation and actual square root
values and percent error value.
*/
void outputValues(double approximation, double userInput, double pctErr){
	cout << "Approximation was " << fixed << setprecision(2) << approximation << " and actual value was " << sqrt(userInput) <<
	" for user input " << userInput << ", percent error was " << pctErr << endl;
}
