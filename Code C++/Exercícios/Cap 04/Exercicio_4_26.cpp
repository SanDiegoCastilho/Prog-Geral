//San Diego - 21/12/2018 - 11:58.
//Exercício 4.26.
#include <iostream>

using namespace std;

int main(){
	int Palindrome;
	int Dig_1, Dig_2, Dig_3, Dig_4, Dig_5;

	cout << "Digite um inteiro de 5 dígitos: ";
	cin >> Palindrome;

	Dig_5 = Palindrome % 10;
	Palindrome = (Palindrome - Dig_5)/10;

	Dig_4 = Palindrome % 10;
	Palindrome = (Palindrome - Dig_4)/10;

	Dig_3 = Palindrome % 10;
	Palindrome = (Palindrome - Dig_3)/10;

	Dig_2 = Palindrome % 10;
	Palindrome = (Palindrome - Dig_2)/10;

	Dig_1 = Palindrome % 10;

	if (Dig_1 == Dig_5){
		if (Dig_2 == Dig_4)
			cout << "É um palíndromo" << endl;
		else
			cout << "Não é um Palíndromo" << endl;
	}else{
		cout << "Não é um palíndromo" << endl;
	}

	return 0;
}