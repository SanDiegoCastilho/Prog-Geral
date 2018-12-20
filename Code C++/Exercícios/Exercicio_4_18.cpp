//San Diego - 20/12/2018 - 12:04.
//Exercício 4.18.
#include <iostream>

using namespace std;

int main(){
	int Number = 1;

	cout << "N\t 10*N\t 100*N\t 1000*N" << endl;
	cout << endl;

	while(Number <= 5){
		cout << Number << "\t " << Number*10 << "\t " << Number*100 << "\t " << Number*1000 << endl;
		Number++;
	}

	return 0;
}