//San Diego - 19/12/218 - 15:26
//Exercício 4.03.
#include <iostream> 

using namespace std;

int main(){
	int x = 3, y = 2, z = 1;
	int count = 11;
	int total = 10;
	int q = 10, d = 2;

	//Item a
	z = x + y;
	x++;

	//Item b
	if (count >= 10)
		cout << "Count is greater than 10" << endl;

	//Item c
	--x;
	total -= x;

	//Item d
	q %= d;
	q = q % d;

	return 0;
}