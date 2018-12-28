//San Diego - 28/12/2018 - 11:06.
//Exercício 5.09.
#include <iostream>

using namespace std;

int main(){
	int Product = 1;

	for (int i = 1; i <= 15; i += 2){
		Product *= i;	
	}

	cout << endl;
	cout << "Resultado: " << Product << endl;

	return 0;
}