//San Diego - 28/12/2018 - 10:54.
//Exercício 5.08.
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int Number, X;
	int Bigger;

	cin >> Number;
	Bigger = -pow(10, 99);

	for (int i = 1; i <= Number; i++){
		cin >> X;

		if (X >= Bigger){
				Bigger = X;
		}	
	}

	cout << endl;
	cout << "O maior número é: " << Bigger << endl;

	return 0;
}