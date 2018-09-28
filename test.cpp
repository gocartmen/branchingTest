#include <iostream>
#include <sstream>

using namespace std;

int main(){
	cout << "Adjon meg két számot!" << endl;

	int number1,number2;
	cout << "Szám 1 : ";
	cin >> number1;
	cout << "Szám 2 : ";
	cin >> number2;

	stringstream outText = "";
	outText << "A két szám különbsége: " << number1 - number2 << endl;

	return;
}
