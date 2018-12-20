//San Diego - 17/12/2018 - 11:18.
//Exercício 2.18
#include <iostream>

using namespace std;

int main(){

	int Number_1, Number_2;

	cout << "Digite dois inteiros: ";
	cin >> Number_1 >> Number_2;

	if (Number_1 > Number_2)
		cout << Number_1 << " é o maior" << endl;
	if (Number_1 < Number_2)
		cout << Number_2 << " é o maior" << endl;
	if (Number_1 == Number_2)
		cout << "Os números sao iguais" << endl;

	return 0;
}