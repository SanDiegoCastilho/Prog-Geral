//San Diego - 01/03/2019 - 15:07.
//Exercício 5.21.
#include <iostream>

using namespace std;

int main(){
	int Type, Hours, HourValue, SalesValue, Qtde;
	double SalManager = 0, SalHours = 0, SalComm = 0, ProductValue = 0, SalProduction = 0;


	cout << "Digite o código do empregado (-1 para sair): ";
	cin >> Type;

	while(Type != -1){
		switch(Type){
			case 1: //Gerente
				cout << "Digite o valor do salário do Gerente (R$): ";
				cin >> SalManager;
				cout << "Salário gerente: R$ " << SalManager << endl;
				break;

			case 2: //Horistas
				cout << "Digite a quantidade de horas trabalhadas: ";
				cin >> Hours;

				cout << "Digite o valor da hora (R$): ";
				cin >> HourValue;

				if (Hours <= 40)
					SalHours = Hours * HourValue;

				else
					Hours = Hours - 40;
					SalHours = (40 * HourValue) + (Hours * 1.5 * HourValue);					
				
				cout << "Salário horistas (R$): " << SalHours << endl;
				break;

			case 3: //Comissionados
				cout << "Digite o valor bruto das vendas (R$): ";
				cin >> SalesValue;

				SalComm = 250 + (0.57 * SalesValue);

				cout << "Salário comissionados: R$ " << SalComm << endl;
				break;

			case 4: //Trabalhadores por produção
				cout << "Digite a quantidade de produtos produzidos: ";
				cin >> Qtde;

				cout << "Digite o valor do produto (R$): ";
				cin >> ProductValue;

				SalProduction = ProductValue * Qtde;

				cout << "Salário do trabalhados p/ produção: R$ " << SalProduction << endl;
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