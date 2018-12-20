//San Diego - 20/12/2018 - 12:14.
//Exercício 4.19.
#include <iostream>

using namespace std;

int main(){
	int Counter = 0;
	int Number, FirstLargest = 0, SecondLargest = 0;

	//Verifica o maior valor digitado.
	while(Counter < 10){
		cout << "Entre com o número de unidades vendidas: ";
		cin >> Number;

		if (Number >= FirstLargest){
			SecondLargest = FirstLargest;
			FirstLargest = Number;

		}else if (Number >= SecondLargest){
			SecondLargest = Number;
		}
		
		Counter++;
	}

	cout << "O maior valor é: " << FirstLargest << endl;
	cout << "O segundo maior valor é: " << SecondLargest << endl;

	return 0;
}