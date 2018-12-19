//San Diego - 19/12/218 - 15:37
//Exercício 4.06.
#include <iostream>

using namespace std;

int main(){
	int product = 5, x = 5, quotient = 5;

	//Item a
	product *= x++;

	cout << "product is: " << product << endl;

	//Item b
	quotient /= ++x;

	cout << "Quotitent is: " << quotient << endl;

	return 0;
}