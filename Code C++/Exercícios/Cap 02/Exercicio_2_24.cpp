//San Diego - 18/12/2018 - 15:12.
//Exercício 2.24
#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int Number_1;
	
	cout << "Digite um inteiro: ";
	cin >> Number_1;

	if (Number_1 % 2 == 0)
		cout << "É par!" << endl;

	else
		cout << "Não é par!" << endl;
		
	return 0;
}