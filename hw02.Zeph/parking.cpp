#include <iostream>
#include <string>

using namespace std;

class Parking{

	private:

		static int totalCars;

		string name;
		int population;

	public:


		Parking(string name){
			this->name = name;
			population = 0;
		}

		Parking(string name, int population){
			this->name = name;
			this->population = population;
			totalCars += population;
		}

		void changePop();
		void changePop(int population);
		
		string getName(){
			return name;
		}

		int getPop(){
			return population;
		}

		static int getTotalCars(){
			return totalCars;
		}
};

void Parking::changePop(){
	population++;
	totalCars++;
}
void Parking::changePop(int increment){
	this->population += increment;
	totalCars += increment;
}

int Parking::totalCars = 0;

int main(void){

	Parking cone("Cone Deck", 5);
	Parking east("East Deck", 12);
	Parking cri("CRI Deck", 3);

	cout << cone.getName() << " " << cone.getPop() << endl;

	cout << Parking::getTotalCars() << endl;

	return 0;
}