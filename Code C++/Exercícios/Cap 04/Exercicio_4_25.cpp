//San Diego 21/12/2018 - 11:38.
//Exercício 4.25.
#include <iostream>

using namespace std;

int main(){
	int Side;
	int Count = 1;
	int aux;

	cout << "Digite o tamanho do lado do quadrado: ";
	cin >> Side;

	if (Side >= 1 && Side <= 20){

		cout << endl;

		//Imprime a primeira linha de '*'.
		while(Count <= Side){
			cout << "*"; 
			Count++;
		}

		//Reinicia o valor de Count.
		Count = 1;
		cout << endl;

		//Imprime as colunas de '*'.
		while(Count <= Side - 2){
			cout << "*";
			aux = 1;

			//Imprime a quantidade de espaços em branco para completar a coluna.
			while(aux <= Side - 2){
				cout << " ";
				aux++;
			}

			//Imprime o último '*' da coluna.
			cout << "*";
			cout << endl;
			Count++;
		}
		
		Count = 1;

		//Imprime a última linha de '*'.
		while(Count <= Side){
			cout << "*"; 
			Count++;
		}
	}

	return 0;
}