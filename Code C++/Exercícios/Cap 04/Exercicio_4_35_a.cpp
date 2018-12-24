//San Diego - 24/12/2018 - 15:37.
//Exercício 4.35.
#include <iostream>

using namespace std;

int main(){
	int Number, Result = 1;
	int aux;

	cout << "Entre com um inteiro: ";
	cin >> Number;

	aux = Number;

	if (Number > 0){
		while(Number > 1){ 
			Result *= Number;
			Number--;
		}

		cout << aux << "! = " << Result << endl;  
	}else{
		cout << endl;
		cout << "ATENÇÃO!" << endl;

		cout << endl;
		cout << "Só são permitidos números maiores ou igual a 0." << endl; 
	}
	
	return 0;
}