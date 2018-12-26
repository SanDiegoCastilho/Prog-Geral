//San Diego - 26/12/2018 - 11:49.
//Exercício 4.02.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	//Item a.
	int sum;

	for (int i = 1; i <= 99; i++){
		sum += i;
	}

	cout << "sum: " << sum << endl;
	cout << endl;

	//Item b.
	cout << setw(15) << fixed << setprecision(1) << 333.546372 << endl;
	cout << setw(15) << fixed << setprecision(2) << 333.546372 << endl;
	cout << setw(15) << fixed << setprecision(3) << 333.546372 << endl;
	cout << endl;

	//Item c.
	cout << setw(10) << fixed << setprecision(2) << pow(2.5, 3) << endl; 
	cout << endl;

	//Intem d.
	int x = 1;

	while(x >= 1 && x <= 20){
		cout << x;

		if (x % 5 == 0){
			cout << endl;

		}else{
			cout << "\t";
		}

		x++;
	}
	cout << endl;

	//Item e.
	for (int i = 1; i <= 20; i++){
		cout << i;

		if (i % 5 == 0){
			cout << endl;

		}else{
			cout << "\t";
		}

	}

	return 0;
}