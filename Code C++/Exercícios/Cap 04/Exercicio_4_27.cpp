//San Diego - /23/12/2018 - 11:55
//Exercício 4.17
#include <iostream>

using namespace std;

int main(){
	int BinaryNumber, DecimalNumber = 0;
	int Bit_1, Bit_2, Bit_3, Bit_4, Bit_5;

	cout << "Digite o número binário (tamanho máx: 5 dígitos): ";
	cin >> BinaryNumber;

	Bit_1 = BinaryNumber % 10;
	BinaryNumber = (BinaryNumber - Bit_1) / 10;

	Bit_2 = BinaryNumber % 10;
	BinaryNumber = (BinaryNumber - Bit_2) / 10;

	Bit_3 = BinaryNumber % 10;
	BinaryNumber = (BinaryNumber - Bit_3) / 10;

	Bit_4 = BinaryNumber % 10;
	BinaryNumber = (BinaryNumber - Bit_4) / 10;

	Bit_5 = BinaryNumber % 10;

	DecimalNumber = (Bit_1 * 1) + (Bit_2 * 2) + (Bit_3 * 4) + (Bit_4 * 8) + (Bit_5 * 16);

	cout << "Seu valor decimal é: " << DecimalNumber << endl;

	return 0;
}