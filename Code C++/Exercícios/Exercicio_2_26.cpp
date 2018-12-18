//San Diego - 18/12/2018 - 15:29.
//Exercício 2.26
#include <iostream>

using namespace std;

int main(){

	cout << "* * * * * * *" << endl; 
	cout << " * * * * * * *" << endl; 
	cout << "* * * * * * *" << endl; 
	cout << " * * * * * * *" << endl; 
	cout << "* * * * * * *" << endl; 
	cout << " * * * * * * *" << endl; 
	cout << "* * * * * * *" << endl; 
	cout << " * * * * * * *" << endl; 

	cout << endl;

	for (int i = 0; i < 8; i++){
		if (i % 2 == 0)
			cout << "* * * * * * *" << endl;
		else	
			cout << " * * * * * * *" << endl;
	}

	return 0;
}