//San Diego - 01/03/2019 - 16:25.
//Exercício 5.23.

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int Width, Lines, Factor = 1;

	cout << "Digite o número de linhas: ";
	cin >> Lines;
	Width = Lines/2 + 1;

	//Número de linhas
	for (int i = 0; i <= Lines ; i++){
		cout << setw(Width);

		//Número de asteriscos
		for (int j = 0; j < i + Factor; j++){
			cout << "*";
		}
		
		cout << endl;

		(i < Lines/2) ? Factor ++ : Factor -= 3;
		(i < Lines/2) ? Width-- : Width ++;
	}

	return 0;
}