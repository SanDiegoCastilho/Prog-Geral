//San Diego - 19/12/218 - 15:45.
//Exercício 4.08.
#include <iostream>

using namespace std;

int main(){
	int x, y; 
	int power = 1;
	int count = 1;

	cout << "Base: ";
	cin >> x;

	cout << "Expoente: ";
	cin >> y;

	while(count <= y){
		power *= x;
		count ++;
	}

	cout << "Resultado: " << power << endl;

	return 0;
}