//San Diego - 28/12/2018 - 14:53.
//Exercício 5.19
#include <iostream>

using namespace std;

int main(){
	long double PI = 0;
	int T = 1;

	for (int i = 1; i <= 1000000; i += 2){ 
		if (T % 2 == 0)
			PI -= 4 / static_cast<double>(i);

		else
			PI += 4 / static_cast<double>(i); 

		T++;
	}

	cout << PI << endl;


	return 0;
}