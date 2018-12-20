//San Diego - 20/12/2018 - 11:54.
//Exercício 4.17.
#include <iostream>

using namespace std;

int main(){
	int Counter = 0;
	int Number, Largest = 0;

	//Verifica o maior valor digitado.
	while(Counter < 10){
		cout << "Entre com o número de unidades vendidas: ";
		cin >> Number;

		if (Number >= Largest)
			Largest = Number;

		Counter++;
	}

	cout << "O maior valor é: " << Largest << endl;

	return 0;
}