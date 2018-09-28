#inlcude <iostream>
#include <string>

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

	cout << "A két szám különbsége: " << number1 - number2 << endl;

	return;
}
