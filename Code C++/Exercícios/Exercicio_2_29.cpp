//San Diego - 18/12/2018 - 15:52.
//Exercício 2.29
#include <iostream>
#include <cmath>

using namespace std;

int main(){

	cout << "Inteiro\t      Quadrado\t      Cubo" << endl;

	for (int i = 0; i <= 10; i++){
		cout << i << "\t\t" << pow(i,2) << "\t\t" << pow(i,3) << endl;	
	}

	return 0;
}