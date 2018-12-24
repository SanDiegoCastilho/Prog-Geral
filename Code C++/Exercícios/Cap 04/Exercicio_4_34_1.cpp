//San Diego - 24/12/2018 - 14:17.
//Exercício 4.34
#include <iostream>

using namespace std;

int main(){
	int Message, Dig_1, Dig_2, Dig_3, Dig_4, Dig_5;
	int EncryptedMessage = 0;

	cout << "Digite a menssage: ";
	cin >> Message;

	//Recupera cada dígito da mensagem separadamente.
	Dig_4 = Message % 10;
	Message = (Message - Dig_4) / 10;

	Dig_3 = Message % 10;
	Message = (Message - Dig_3) / 10;

	Dig_2 = Message % 10;
	Message = (Message - Dig_2) / 10;

	Dig_1 = Message % 10;

	//Criptografia
	Dig_1 = (Dig_1 + 7) % 10;
	Dig_2 = (Dig_2 + 7) % 10;
	Dig_3 = (Dig_3 + 7) % 10;
	Dig_4 = (Dig_4 + 7) % 10;

	EncryptedMessage = (Dig_3 * 1000) + (Dig_4 * 100) + (Dig_1 * 10) + (Dig_2);

	cout << "Menssagem criptografada: " << EncryptedMessage << endl;

	return 0;
}