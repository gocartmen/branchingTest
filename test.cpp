#include <iostream>
#include <sstream>
#include <string>

#include "Classes/newClass.h"
#include "Classes/class2.h"

using namespace std;

void writeText(string text){
	cout << text << endl;
}

int main(){
	cout << "Adjon meg két számot!" << endl;

	int number1,number2;
	cout << "Szám 1 : ";
	cin >> number1;
	cout << "Szám 2 : ";
	cin >> number2;

	NewClass calc;
	Class2 div;

	stringstream outText;
	outText.str("");
	
	outText << "A két szám összege: " << calc.getAdd(number1, number2) << endl;

	outText << "A két szám különbsége: " << calc.getSub(number1, number2) << endl;
	
	outText << "A két szám hányadosa: " << div.getDiv(number1, number2) << endl;

	writeText(outText.str());

	return 0;
}
