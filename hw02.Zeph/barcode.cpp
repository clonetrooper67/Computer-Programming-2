#include <iostream>
#include <string>
#include <unordered_map>
#include <cstdlib>

using namespace std;

string numsToCode[10] = {"11000", "00011","00101","00110",
	"01001","01010","01100","10001","10010","10100"};

unordered_map<string, string> codeToNums({{"00011", "1"}, {"00101", "2"},
{"00110", "3"}, {"01001", "4"}, {"01010", "5"}, {"01100", "6"}, 
{"10001", "7"}, {"10010", "8"}, {"10100", "9"}, {"11000", "0"}});

class Zipcode {

	private:
		int barcode;

	public: 

		Zipcode(int barcode) {
			this->barcode = barcode;
		}

		Zipcode(string barcode){
			string temp = "";

			for(int i = 1; i<25; i+=5){
				temp += codeToNums[barcode.substr(i, 5)];
			}			
			this->barcode = stoi(temp);
		}

		string getString();
		int getInt();
};

string Zipcode::getString(){
	string temp = "1";
	string convertedCode = to_string(barcode);

	for(int i = 0; i<5; i++){
		temp += numsToCode[convertedCode[i] - 48];
	}	
	temp = temp + "1";
	return temp;
}

int Zipcode::getInt(){
	return barcode;
}

int main(void){

	Zipcode test1(23456);
	Zipcode test2("110100110000010100011110001");

	cout << test1.getInt() << endl;
	cout << test1.getString() << endl;
	cout << test2.getInt() << endl;
	cout << test2.getString() << endl;


	return 0;
}