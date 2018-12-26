//San Diego - 26/12/2018 - 14:22.
//Exercício 4.05.
#include <iostream>

using namespace std;

int main(){
	int Number, Value;
	int Sum = 0;

	cin >> Number;

	for (int i = 1; i <= Number; i++){
		cin >> Value;
		Sum += Value;
	}

	cout << "A soma vale: " << Sum << endl;

	return 0;
}