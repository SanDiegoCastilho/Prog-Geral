//San Diego - 19/12/2018 - 13:32.
//Classe Account, representa uma conta de banco - Atv. 3.12.

class Account{
private:
	int Balance;

public:
	//Construtor, recebe um inteiro correspondente ao valor inicial da conta.
	Account(int);

	//Adiciona um valor ao saldo atual.
	void credit(int);

	//Retira um valor do saldo atual.
	void debit(int);

	//Retorna o inteiro correspondente ao saldo da conta.
	int getBalance();
};