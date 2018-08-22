//Método dos Parênteses Encaixados.

#include <iostream> 

using namespace std;

int CalculaBase(int binario);


int main(){
	long int bin;

	cout << "Digite um número em binário: ";
	cin >> bin;

	cout << "Valor em decimal vale: " << CalculaBase(bin) << endl;

	return 0;
}

int CalculaBase(int binario){
	if (binario == 1 | binario == 0){
		return binario;

	}else{
		return 2 * CalculaBase(binario / 10) + binario % 10;
	}
}