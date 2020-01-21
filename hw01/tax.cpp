/*
 * tax.cpp
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

using namespace std;
//Function prototype
double taxCalc(double inco, char filing);

const int tax[7] ={10,12,22,24,32,35,37};
const int taxBracket[4][6]= {{9700,39475,84200,160725,204100,510300},
							{19400,78950,168400,321450,408200,612350},
							{9700,39475,84200,160725,204100,306175},
							{13850,52850,84200,160700,204100,510300}};
int main(void){

	char filingStatus;
	double income;
	
	cout<<"Enter the filing status\n"<<
			"Press S for Single\n"<<
			"Press M for Married Filing Jointly\n"<<
			"Press F for Married Filing Seperately\n"<<
			"Press H for Head of Household\n";
	cin>>filingStatus;
	
	cout<<"Enter the taxable income for the year 2019\n";
	cin>>income;
	
	//Your code to determine the filing status and the taxBracket
	//Call taxCalc function to calculate the tax
	
	
	return 0;
}

double taxCalc(double inco, char filing){
	//Your code to calculate the tax goes here
}
