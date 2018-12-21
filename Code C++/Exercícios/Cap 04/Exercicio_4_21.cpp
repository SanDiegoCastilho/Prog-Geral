//San Diego - 21/12/2018 - 11:05.
//Exercício 4.21.
#include <iostream>

using namespace std;

int main(){
	int count = 1; // inicializa a contagem
 
	while ( count <= 10 ){
		cout << ( count % 2 ? "****" : "++++++++" ) << endl;
  		count++; 
  	} 
 
	return 0;
}