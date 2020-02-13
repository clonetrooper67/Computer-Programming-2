#include "Mocha.h"

/* This is main program
 * Create objects of Mocha inside main function
 * Use setOrder and DisplayReceipt of Mocha class to set and display
 * the order
 */

int main(void){

	Mocha *orders[5];
	for (int i = 0; i < 5; i++)
	{
		orders[i] = new Mocha(i+1);
		orders[i]->setName();
		orders[i]->setBevType();
		orders[i]->setBevSize();
		orders[i]->setQuantity();
		orders[i]->computePrice();
		orders[i]->displayReceipt();
	}
	return 0;
}
