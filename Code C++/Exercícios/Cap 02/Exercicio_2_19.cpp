//San Diego - 17/12/2018 - 11:20.
//Exercício 2.19
#include <iostream>

using namespace std;

int main(){

	int Number_1, Number_2, Number_3;
	int Sum, Average, Product, Bigger, Minor;

	cout << "Entre com três inteiros: ";
	cin >> Number_1 >> Number_2 >> Number_3;

	Sum = Number_1 + Number_2 + Number_3;
	Average = ((Sum) / 3);
	Product = Number_1 * Number_2 * Number_3;

	if (Number_1 >= Number_2){
		if (Number_1 >= Number_3){
			Bigger = Number_1;

			if (Number_3 >= Number_2)
				Minor = Number_2;
			else
				Minor = Number_3;
		}else{
			Minor = Number_2;
			Bigger = Number_3;
		}
	}else{
		if (Number_2 >= Number_3){
			Bigger = Number_2;

			if (Number_1 >= Number_3)
				Minor = Number_3;
			else
				Minor = Number_1;
		}else{
			Bigger = Number_3;
			Minor = Number_1; 
		}
	}
	
	cout << "Soma: " << Sum << endl;
	cout << "Média: " << Average << endl;
	cout << "Produto: " << Product << endl;
	cout << "Maior: " << Bigger << endl;
	cout << "Menor: " << Minor << endl;

	return 0;
}