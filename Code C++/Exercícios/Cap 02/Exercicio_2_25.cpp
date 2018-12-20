//San Diego - 18/12/2018 - 15:15.
//Exercício 2.25
#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int Number_1, Number_2;
	
	cout << "Digite dois inteiro: ";
	cin >> Number_1 >> Number_2;

	if (Number_1 % Number_2 == 0)
		cout << Number_1 << " É multiplo de " << Number_2 << endl;

	else
		cout << Number_1 << " Não é multiplo de " << Number_2 << endl;
		
	return 0;
}