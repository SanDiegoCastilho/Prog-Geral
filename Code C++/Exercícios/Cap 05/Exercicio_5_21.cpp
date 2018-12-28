//San Diego - 28/12/2018 - 15:26.
//Exercício 5.21.
#include <iostream>

using namespace std;

int main(){
	int Type, Hours;
	double SalManager = 0, SalHours = 0;


	cout << "Digite o código do empregado (-1 para sair): ";
	cin >> Type;

	while(Type != -1){
		switch(Type){
			case 1:

				break;

			case 1:
				break;

			case 1:
				break;

			case 1:
				break;

			case ' ':
			case '\t':
			case '\n':
			case -1:
				break;

			default:
				cout << "Código de empregado inválido." << endl;
				break;
		}

		cout << "Digite o código do empregado (-1 para sair): ";
		cin >> Type;
	}

	return 0;
}