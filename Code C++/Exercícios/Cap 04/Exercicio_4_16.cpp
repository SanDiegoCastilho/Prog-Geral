//San Diego - 20/12/2018 - 11:39.
//Exercício 4.16.
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int WorkedHours = 0;
	int Overtime = 0;
	double HourValue = 0;
	double OvertimeValue = 0;
	double Salary = 0;

	cout << "Entre com as horas trabalhadas (-1 para sair): ";
	cin >> WorkedHours;

	while(WorkedHours != -1){
		cout << "Entre com o valor por hora trabalhada: ";
		cin >> HourValue;

		//Calcula o salário
		if (WorkedHours > 40){
			Overtime = WorkedHours - 40;
			OvertimeValue = HourValue + (0.5 * HourValue);
			Salary = (40 * HourValue) + Overtime * OvertimeValue;

		}else{
			Salary = WorkedHours * HourValue;
		}

		cout << "Salário: $" << Salary << endl;
		cout << endl;

		cout << "Entre com as horas trabalhadas (-1 para sair): ";
		cin >> WorkedHours;
	}

	return 0;
}
