//San Diego - 18/12/2018 - 14:35.
//Exercício 2.23
#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int Number_1, Number_2, Number_3, Number_4, Number_5;
	int Bigger, Minor;

	cout << "Digite 5 inteiros: ";
	cin >> Number_1 >> Number_2 >> Number_3 >> Number_4 >> Number_5;

	Bigger = -pow(10, 99);
	Minor  =  pow(10, 99);

	if (Number_1 >= Bigger)
		Bigger = Number_1;
	if(Number_1 <= Minor)
		Minor = Number_1;

	if (Number_2 >= Bigger)
		Bigger = Number_2;
	if(Number_2 <= Minor)
		Minor = Number_2;

	if (Number_3 >= Bigger)
		Bigger = Number_3;
	if(Number_3 <= Minor)
		Minor = Number_3;

	if (Number_4 >= Bigger)
		Bigger = Number_4;
	if (Number_4 <= Minor)
		Minor = Number_4;

	if (Number_5 >= Bigger)
		Bigger = Number_5;
	if (Number_5 <= Minor)
		Minor = Number_5;

	cout << "O maior valor: " << Bigger << endl;
	cout << "O menor valor: " << Minor  << endl;

	return 0;
}