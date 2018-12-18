//San Diego - 18/12/2018 - 15:33.
//Exercício 2.27
#include <iostream>

using namespace std;

int main(){

	char C;

	cout << "Digite um caractere: ";
	cin >> C;

	cout << "Seu código é: " << static_cast<int>(C);

	return 0;
}