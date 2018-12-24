//San Diego - 24/12/2018 - 14:06.
//Exercício 4.31.
#include <iostream>

using namespace std;

int main(){
	int SideA, SideB, SideC;

	cout << "Digite o valor dos 3 lados (cm): ";
	cin >> SideA >> SideB >> SideC;

	if (SideA < (SideB + SideC) && SideB < (SideA + SideC) && SideC < (SideA + SideB))
		cout << "Os três lados podem formar um triângulo." << endl;
	else
		cout << "Não podem formar um triângulo." << endl;

	return 0;
}