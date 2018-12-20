//San Diego - 20/12/2018 - 11:05.
//Exercício 4.15.
#include <iostream>
#include <iomanip>

#define FixedSalary 200;

using namespace std;

int main(){
	double TotalSales = 0;
	double NewSalary = 0;

	cout << "Entre com as vendas (US$) (-1 para sair): ";
	cin >> TotalSales;

	while(TotalSales != -1){
		NewSalary = (0.09 * TotalSales) + FixedSalary; 

		cout << "Salário: " << NewSalary << endl;
		
		cout << "Entre com as vendas (US$) (-1 para sair): ";
		cin >> TotalSales;
	}

	return 0;
}