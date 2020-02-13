#include "Mocha.h"

//Member functions are defined here

void Mocha::setName()
{
    cout << "Can I get a name for the order please: " << endl;
    cin >> this->customerName;
}

void Mocha::setBevType()
{
	cout << "What type of beverage would you like to have: " << endl;
	cout << "0 -> Mocha" << endl;
	cout << "1 -> Latte" << endl;
	cout << "2 -> Chai" << endl;
	cout << "3 -> Matcha" << endl;
	cin >> this->bevType;
  while (this->bevType < 0 || this->bevType > 3)
  {
    cout << "Please pick a valid entry: " << endl;
    cin >> this->bevType;
  }
}

void Mocha::setBevSize()
{
	cout << "In what size: " << endl;
	cout << "0 -> Tall" << endl;
	cout << "1 -> Grande" << endl;
	cout << "2 -> Venti" << endl;
	cin >> this->bevSize;
  while (this->bevSize < 0 || this->bevSize > 2)
  {
    cout << "Please pick a valid entry: " << endl;
    cin >> this->bevSize;
  }
}

void Mocha::setQuantity()
{
	cout << "How many would you like to order: " << endl;
	cin >> this->quantity;
}

void Mocha::computePrice()
{
	this->subtotal = PRICING[this->bevType][this->bevSize] * this->quantity;
	this->totalPrice = (subtotal * TAX) + subtotal;
}

void lineBreak()
{
  for (int i = 0; i < 54; i++)
  {
    cout << "-";
  }
  cout << endl;
}

string Mocha::bevTypeString() const
{
  switch (this->bevType)
  {
    case 0:
      return "Mocha";
    case 1:
      return "Latte";
    case 2:
      return "Chai";
    case 3:
      return "Matcha";
  }
}

string Mocha::bevSizeString() const
{
  switch (this->bevSize)
  {
    case 0:
      return "Tall";
    case 1:
      return "Venti";
    case 2:
      return "Grande";
  }
}

void Mocha::displayReceipt()
{
  lineBreak();
  for (int i = 0; i < 21; i++)
  {
    cout << "*";
  }
  cout << "Mocha Joe's";
  for (int i = 0; i < 22; i++)
  {
    cout << "*";
  }
  cout << "\n     Maltby's Street Market, London SE1 3PA, USA     \n";
  lineBreak();
  cout << "Order Number: " << this->getOrderNumber() << endl;
  cout << "Customer Name: " << this->getName() << endl;
  lineBreak();
  cout << "Order\t\tQuantity\t\tUnit Price" << endl;
  cout << bevSizeString() << " " << bevTypeString() << '\t' << fixed << setprecision(2) <<
    this->getQuantity() << "\t\t\t" << PRICING[this->getBevType()][this->getBevSize()] << endl;
  lineBreak();
  cout << "Subtotal\t\t\t\t" << this->getSubtotal() << endl;
  cout << "Tax\t" << static_cast<int> (TAX * 100) << "%" << endl;
  lineBreak();
  cout << endl << "Total\t\t\t\t\t" << this->getPrice() << endl;
  lineBreak();
  cout << "\t\tThank you for your order" << endl;
  lineBreak();
  cout << endl << "\t\tNext Customer Please" << endl << endl;
}
