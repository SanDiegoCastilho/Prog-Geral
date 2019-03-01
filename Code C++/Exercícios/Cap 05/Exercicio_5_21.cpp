//San Diego - 01/03/2019 - 15:07.
//Exercício 5.21.
#include <iostream>

using namespace std;

int main(){
	int Type, Hours, HourValue;
	double SalManager = 0, SalHours = 0;


	cout << "Digite o código do empregado (-1 para sair): ";
	cin >> Type;

	while(Type != -1){
		switch(Type){
			case 1: //Gerente
				cout << "Digite o valor do salário do Gerente (R$): " << endl;
				cin >> SalManager;
				cout << "Salário gerente (R$): " << SalManager << endl; 
				break;

			case 2: //Horistas
				cout << "Digite a quantidade de horas trabalhadas: " << endl;
				cin >> Hours;

				cout << "Digite o valor da hora (R$): " << endl;
				cin >> HourValue;

				if (Hours <= 40)
					SalHours = Hours * HourValue;

				else
					
				
				SalHours = SalHours + ((Hours) * HourValue) + 

				break;

			case 3:
				break;

			case 4:
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