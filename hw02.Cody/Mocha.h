#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

const double TAX = .05;
const double PRICING[][3] = {
	{3.50, 4.00, 4.50},
	{3.00, 3.50, 4.00},
	{2.50, 3.00, 3.50},
	{3.00, 3.50, 4.00}
};

class Mocha{
	// Define your class here
	string customerName;
	int bevType;
	int bevSize;
	int quantity;
	double subtotal;
	double totalPrice;
	int orderNumber;
	string bevTypeString() const;
	string bevSizeString() const;

public:
	void setName();
	void setBevType();
	void setBevSize();
	void setQuantity();
	string getName() const
	{
		return this->customerName;
	}
	int getBevType() const
	{
		return this->bevType;
	}
	int getBevSize() const
	{
		return this->bevSize;
	}
	int getQuantity() const
	{
		return this->quantity;
	}
	void computePrice();
	double getPrice() const
	{
		return this->totalPrice;
	}
	int getOrderNumber() const
	{
		return this->orderNumber;
	}
	double getSubtotal() const
	{
		return this->subtotal;
	}
	void displayReceipt();
	Mocha()
	{
		this->orderNumber = 0;
	}
	Mocha(int numUnique)
	{
		orderNumber = numUnique;
	}
};
