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

#define NUM_RUNS 5

using namespace std;

//Function prototypes
void takeInput(double &input);
double squareRoot(double input);
double calculatePctErr(double approximation, double input);
void outputValues(double approximation, double input, double pctErr);

int main(void){
	double input, approximation, pcErr;
	takeInput(input);

	approximation = squareRoot(input);

	pcErr = calculatePctErr(approximation, input);
	outputValues(approximation, input, pcErr);

	return 0;
}

//Function that takes user input to calculate an approximate square root
void takeInput(double &input){
	cout << "Please enter your number: ";
	cin >> input;
	cout << endl;
}

/*Function that calculates an approximation of a square root using the 
Babylonian method
*/
double squareRoot(double input){
	double guess = 2.0;
	double r;

	for(int i = 0; i<NUM_RUNS; i++){
		r = input/guess;
		guess = (guess+r)/2.0;
	}

	return guess;
}

//Function that calculates the percent error in the approximation
double calculatePctErr(double approximation, double input){
	double actual = sqrt(input);
	double pctErr = abs(approximation-actual)/actual*100.0;

	// cout << "Approximation: " << approximation << endl;
	// cout << "Actual Number: " << actual << endl;
	
	return pctErr;
}

/*Function that outputs the approximation and actual square root
values and percent error value.
*/
void outputValues(double approximation, double input, double pctErr){
	printf ("%.2f \n", approximation);
	printf ("%.2f %% \n", pctErr);
}