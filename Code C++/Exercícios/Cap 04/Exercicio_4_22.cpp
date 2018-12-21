//San Diego - 21/12/2018 - 11:14.
//Exercício 4.22.
#include <iostream>

using namespace std;

int main(){
	int row = 10; // inicializa a linha
	int column; // declara a coluna
 
	while ( row >= 1 ){
		column = 1; // configura coluna como 1 quando a iteração inicia
 
		while ( column <= 10 ){
			cout << ( row % 2 ? "<" : ">" ); 
			column++; 
		} 
 
		row--; 
 		cout << endl; 
 	} 

	return 0;
}