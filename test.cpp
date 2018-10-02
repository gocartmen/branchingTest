#include <iostream>
#include <sstream>
#include <string>

#include "Classes/newClass.h"
#include "Classes/class2.h"
#include "Classes/coder.h"

using namespace std;

void writeText(string text){
	cout << text << endl;
}

int main(){
	cout << "Adjon meg két számot!" << endl;

	float number1,number2;
	cout << "Szám 1 : ";
	cin >> number1;
	cout << "Szám 2 : ";
	cin >> number2;

	NewClass calc;
	Class2 div;
	Coder code;

	stringstream outText;
	outText.str("");
	
	outText << "A két szám összege: " << calc.getAdd(number1, number2) << endl;

	outText << "A két szám különbsége: " << calc.getSub(number1, number2) << endl;
	
	outText << "A két szám szorzata: " << div.getMul(number1, number2) << endl;

	outText << "A két szám hányadosa: " << div.getDiv(number1, number2) << endl;

	writeText(outText.str());
	
	//new part
	string preparedText = "Ez a teszt szöveg kódolva és dekódolva lett!";
	string codedText = "";
	string decodedText = "";

	codedText = code.encode(preparedText);
	decodedText = code.decode(codedText);

	writeText("Kódolás/dekódolás DEMO: ");
	writeText(codedText);
	writeText(decodedText);

	return 0;
}
