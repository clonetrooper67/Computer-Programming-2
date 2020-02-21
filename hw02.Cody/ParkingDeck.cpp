#include <iostream>
#include <string>
using namespace std;

class Parking
{
	int occupiedSpots;
	string name;
	int revenue;
	int calcRevenue()
	{
		return this->occupiedSpots * 7;
	}
	
	public:
		Parking(string);
		void incrementOccupied()
		{
			this->occupiedSpots++;
		}
		void incrementOccupied(int n)
		{
			this->occupiedSpots += n;
		}
		int getOccupied() const
		{
			return this->occupiedSpots;
		}
		string getName() const
		{
			return this->name;
		}
		int getRevenue();
		void display();
		void setName(string name)
		{
			this->name = name;
		}
};

Parking::Parking(string name)
{
	this->name = name;
	this->occupiedSpots = 0;
}

int Parking::getRevenue()
{
	return this->calcRevenue();
}

void Parking::display()
{
	cout << "Deck: " << this->getName() << ", Occupancy: " << this->getOccupied();
	cout << ", Revenue: " << this->getRevenue() << endl;
}

int main(void)
{
	Parking deck1("CRI Deck");
	Parking deck2("East Deck");
	Parking deck3("Cone Deck");
	Parking deck4("Union Deck");
	for (int i = 0; i < 10; i++)
	{
		deck1.incrementOccupied();
		deck2.incrementOccupied(2);
		deck3.incrementOccupied(4);
		deck4.incrementOccupied(8);
	}
	deck1.display();
	deck2.display();
	deck3.display();
	deck4.display();
	return 0;
}
