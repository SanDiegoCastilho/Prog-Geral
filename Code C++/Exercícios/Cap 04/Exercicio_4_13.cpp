//San Diego - 20/12/2018 - 10:12.
//Exercício 4.13.
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double Mileage = 0;
	double Liters  = 0;
	double TotalLiters  = 0;
	double TotalMileage = 0;

	cout << "Entre com a quilometragem (-1 para sair): ";
	cin >> Mileage;

	while(Mileage != -1){
		cout << "Entre com os litros: ";
		cin >> Liters;

		cout << "Km/Litro deste tanque: " << setprecision(5) << Mileage/Liters << endl;

		TotalLiters += Liters;
		TotalMileage += Mileage;

		cout << "Total Km/Litro: " << setprecision(5) << TotalMileage/TotalLiters << endl; 
		cout << endl;
		
		cout << "Entre com a quilometragem (-1 para sair): ";
		cin >> Mileage;
	}

	return 0;
}
