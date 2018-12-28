//San Diego - 28/12/2018 - 12:03.
//Exercício 5.14.
#include <iostream>

using namespace std;

int main(){
	int ProductNumber = 0, Qtde = 0;
	double Total = 0;

	while(ProductNumber != -1){ 

		switch(ProductNumber){
			case 1:
				Total += Qtde * 2.98;
				break;

			case 2:
				Total += Qtde * 4.5;
				break;

			case 3:
				Total += Qtde * 9.98;
				break;

			case 4:
				Total += Qtde * 4.49;
				break;

			case 5:
				Total += Qtde * 6.87;
				break;

			case '\t':
			case ' ':
			case '\n':
			case 0:
			case -1:
				break;

			default:
				cout << "Valor inválido" << endl;
				break;
		}

		cout << "Número do produto + Quantidade (-1 para sair): ";
		cin >> ProductNumber >> Qtde;

	}

	cout << "Total: R$ " << Total << endl;

	return 0;
}