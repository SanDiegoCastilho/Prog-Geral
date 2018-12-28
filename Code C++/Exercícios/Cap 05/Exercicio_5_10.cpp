//San Diego - 28/12/2018 - 11:18.
//Exercício 4.10.
#include <iostream>

using namespace std;

int main(){
	unsigned long long int Factorial = 1;

	for (int i = 1; i <= 20; i++){
		for (int j = i; j >= 1 ; j--){
			Factorial *= j;
		}

		cout << i << "! = " << Factorial << endl;
		Factorial = 1;
	}

	return 0;
}