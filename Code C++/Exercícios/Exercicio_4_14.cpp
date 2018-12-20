//San Diego - 20/12/2018 - 10:37.
//Exercício 4.13.
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int AccountNumber = 0;
	double TotalFees = 0;
	double TotalPayments = 0;
	double OpeningBalance = 0;
	double NewBalance = 0;
	double CreditLimit = 0;

	cout << "Entre com o número da conta (-1 para terminar): ";
	cin >> AccountNumber;

	while(AccountNumber != -1){
		cout << "Entre com o saldo inicial: ";
		cin >> OpeningBalance;

		cout << "Entre com o total de taxas: ";
		cin >> TotalFees;

		cout << "Entre com o total de créditos: ";
		cin >> TotalPayments;

		cout << "Entre com o limite de crédito: ";
		cin >> CreditLimit;

		NewBalance = OpeningBalance + TotalFees - TotalPayments;
		cout << endl;

		if (NewBalance > CreditLimit){
			cout << "Novo Saldo: " << setprecision(6) << NewBalance << endl;
			cout << "Conta: " << AccountNumber << endl;
			cout << "Limite de crédito: " << CreditLimit << endl;
			cout << "Saldo: " << NewBalance << endl;

			cout << endl;
			cout << "==============================" << endl;
			cout << "LIMITE DE CRÉDITO ULTRAPASSADO" << endl; 
			cout << "==============================" << endl;
			cout << endl;
		}

		cout << "Entre com o número da conta (-1 para terminar): ";
		cin >> AccountNumber;
	}

	return 0;
}