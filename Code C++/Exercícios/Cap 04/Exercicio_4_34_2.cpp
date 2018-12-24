//San Diego - 24/12/2018 - 14:51.
//Exercício 4.34 continuação - Decrptografia
#include <iostream>

using namespace std;

int main (){
	int Message, Dig_1, Dig_2, Dig_3, Dig_4, Dig_5;
	int DecryptedMessage = 0;

	cout << "Digite a menssage: ";
	cin >> Message;

	//Recupera cada dígito da mensagem separadamente.
	Dig_2 = Message % 10;
	Message = (Message - Dig_2) / 10;

	Dig_1 = Message % 10;
	Message = (Message - Dig_1) / 10;

	Dig_4 = Message % 10;
	Message = (Message - Dig_4) / 10;

	Dig_3 = Message % 10;

	//Decriptografando a mensagem.
	if (Dig_1 == 8 || Dig_1 == 9)
		Dig_1 = Dig_1 - 7;
	else
		Dig_1 = Dig_1 + 3;

	if (Dig_2 == 8 || Dig_2 == 9)
		Dig_2 = Dig_2 - 7;
	else
		Dig_2 = Dig_2 + 3;

	if (Dig_3 == 8 || Dig_3 == 9)
		Dig_3 = Dig_3 - 7;
	else
		Dig_3 = Dig_3 + 3;

	if (Dig_4 == 8 || Dig_4 == 9)
		Dig_4 = Dig_4 - 7;
	else
		Dig_4 = Dig_4 + 3;

	DecryptedMessage = (Dig_1 * 1000) + (Dig_2 * 100) + (Dig_3 * 10) + (Dig_4);

	cout << "Mensagem decriptografada: " << DecryptedMessage << endl;

	return 0;
}