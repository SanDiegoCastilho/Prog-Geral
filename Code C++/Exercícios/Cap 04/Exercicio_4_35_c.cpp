//San Diego - 24/12/20018 - 16:56.
//Exercício 4.35.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	long double Denominator, Precision, Factorial = 1; 
	long double e = 1;
	int aux, Numerator;

	cout << "CALCULO DA CONSTANTE e^x" << endl;
	cout << endl;

	cout << "Entre com a precisão: ";
	cin >> Precision;

	cout << "Entre com o Expoente: ";
	cin >> Numerator;

	//Variável auxiliar para controle do loop.
	//Vai de 1 até a Precision digitada pelo usuário.
	aux = 1;

	//Somatório para cálculo de e.
	if (Precision > 0){
		while(aux <= Precision){

			//Calculo do fatorial do Denominador.
			while(Denominator > 1){ 
				Factorial *= Denominator;
				Denominator--;
			}

			e += pow(Numerator, aux)/Factorial;

			//Reiniciando os valores.
			aux++;
			Denominator = aux;
			Factorial = 1;

		}

		cout << "e: " << setprecision(10) << e << endl;

	}else{
		cout << endl;
		cout << "ATENÇÃO!" << endl;

		cout << endl;
		cout << "Só são permitidos números maiores a 0." << endl; 
	}

	return 0;
}