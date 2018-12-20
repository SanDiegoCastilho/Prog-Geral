//San Diego - 18/12/2018 - 15:38.
//Exercício 2.28
#include <iostream>

using namespace std;

int main(){

	int Number, Dig_1, Dig_2, Dig_3, Dig_4, Dig_5;

	cout << "Digite um inteiro de 5 dígitos: ";
	cin >> Number;

	Dig_1  = Number % 10;

	Dig_2  = (Number % 100) / 10;

	Dig_3  = (Number % 1000) / 100;

	Dig_4  = (Number % 10000) / 1000;

	Dig_5 = (Number % 100000) / 10000;

	cout << Dig_5 << "\t" << Dig_4 << "\t" << Dig_3 << "\t" << Dig_2 << "\t" << Dig_1 << endl;

	return 0;
}