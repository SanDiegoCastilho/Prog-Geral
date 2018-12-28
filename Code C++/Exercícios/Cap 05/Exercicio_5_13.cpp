//San Diego - 28/12/2018 - 11:57.
//Exercício 5.13.
#include <iostream>

using namespace std;

int main(){
	int Width;

	cin >> Width;
	cout << endl;

	if (Width >= 1 && Width <= 30){
		for (int i = 1; i <= Width; i++){
			cout << "*";
		}
	}

	return 0;
}