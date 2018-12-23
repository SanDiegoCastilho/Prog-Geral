//San Diego - 23/12/2018 - 12:55.
//Execício 4.28
#include <iostream>

using namespace std;

int main(){
	int Line = 1, Column = 1;

	while(Line <= 8){

		if (Line % 2 == 0)
			cout << " ";

		while(Column <= 7){
			cout << "* ";
			Column++;
		}

		Column = 1;
		Line++;
		cout << endl;
	}

	return 0;
}