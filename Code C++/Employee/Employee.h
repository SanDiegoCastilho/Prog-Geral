//San Diego - 19/12/2018 - 13:42.
//Classe Employee - Questão 3.14.
#include <string>

using namespace std;

class Employee{
private:
	string name, lastName;
	int salary;

public:
	//Contrutor, inicializa os atributos dos objetos da classe Employee.
	Employee(string, string, int);

	//Guarda o nome do objeto da classe Employee.
	void setName(string);

	//Retorna o nome do objeto da classe Employee.
	string getName();

	//Guarda o sobrenome do objeto da classe Employee.
	void setLastName(string);

	//Retorna o sobrenome do objeto da classe Employee.
	string getLastName();

	//Guarda o valor do salário de um objeto da classe Employee.
	void setSalary(int);

	//Retorna o valor do salário de um objeto da classe Employee.
	int getSalary();
}; 