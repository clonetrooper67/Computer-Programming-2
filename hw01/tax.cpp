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
	int filing = 37;
	
	double income;
	double taxPayed;
	
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
	taxPayed = taxCalc(income, filingStatus);
	cout<<"Tax Due to IRS: $" << taxPayed << endl;
	return 0;
}

double taxCalc(double inco, char filing){
	//Your code to calculate the tax goes here
	double taxDue = 0;
	int bracket = 6;
	int status = 0;
	switch(filing){
		case 83:
			status = 0;
		break;
		case 77:
			status = 1;
		break;
		case 70:
			status = 2;
		break;
		case 72:
			status = 3;
		break;
	}

	for(int i = 0 ; i<6; i++){
		if(inco < taxBracket[status][i]){
			bracket = i;
			break;
		}
	}
		
	if(bracket > 0){
		inco -= taxBracket[status][bracket - 1];
		taxDue += taxBracket[status][0]*tax[0]/100;	
		for(int i = 1; i<bracket; i++){
			taxDue += (taxBracket[status][i]-taxBracket[status][i-1])*tax[i]/100;
		}
	}
	taxDue += inco*tax[bracket]/100;
return taxDue;
}
