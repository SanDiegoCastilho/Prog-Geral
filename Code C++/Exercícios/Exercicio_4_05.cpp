//San Diego - 19/12/218 - 15:34
//Exercício 4.05.
#include <iostream>

using namespace std;

int main(){
	int x = 0, sum = 0;

	while(x <= 100){
		sum += x;
		x++;
	}

	cout << "The sum is: " << sum << endl;

	return 0;
}