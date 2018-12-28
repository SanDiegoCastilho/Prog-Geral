//San Diego - 28/12/2018 - 15:12.
//Exercício 5.20.
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int side1, side2, hipotenuse;

	for (int i = 1; i <= 500; i++){
		side1 = pow(i, 2);

		for (int j = 1; j <= 500; j++){
			side2 = pow(j, 2);

			for (int k = 1; k <= 500; k++){
				hipotenuse = pow(k, 2);

				if ((side1 + side2) == hipotenuse){
					cout << sqrt(side1) << "²  +  " << sqrt(side2) << "²   = " << sqrt(hipotenuse) << "²" << endl;
				}
			}
		}
	}

	return 0;
}