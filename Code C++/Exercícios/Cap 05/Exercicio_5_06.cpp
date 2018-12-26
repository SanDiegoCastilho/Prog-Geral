//San Diego - 26/12/2018 - 14:28.
//Exercício 4.06.
#include <iostream>

using namespace std;

int main(){
	int Average = 0, Number = 0, Count = 0;
	int Sum = 0;

	for (;Number != 9999; Count++){
		cin >> Number;

		if (Number != 9999)
			Sum += Number;
	}

	cout << "A média vale: " << Sum/(Count-1) << " Count : " << Count << endl;

	return 0;
}