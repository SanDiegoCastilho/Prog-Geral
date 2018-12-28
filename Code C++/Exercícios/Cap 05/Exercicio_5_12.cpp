//San Diego - 28/12/2018 - 11:41.
//Exercício 5.12.
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	for (int i = 1; i <= 10; i++){
		for (int j = 1; j <= i; j++){
			cout << "*";
		}

		cout << setw(20 - i);

		for (int j = 10; j >= i; j--){
			cout << "*";
		}

		cout << setw(2*i + 10);

		for (int j = 10; j >= i; j--){
			cout << "*";
		}

		cout << setw(20 - i);

		for (int j = 1; j <= i; j++){
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}