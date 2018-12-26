//San Diego  - modificado - 25/12/2018 - 12:30
//Introdução a Orientação a Objetos com C++.
#include <string>

using namespace std;

//Declarando a classe GradeBook.
class GradeBook{
private:
	string CourseName;
	string InstructorName;
	int aCount, bCount, cCount, dCount, eCount, fCount;

public:
	//O construtor inicializa courseName com uma string passada como argumento.
	GradeBook(string, string);

	//Função responsável por guardar o nome do curso.
	void setCourseName(string);

	//Função responsável por obter o nome do curso.
	string getCourseName ();

	//Função responsável por guardar o nome do instrutor.
	void setInstructorName(string);

	//Função responsável por obter o nome do instrutor.
	string getInstructorName();

	//Função que imprime uma mensagem na tela.
	void displayMessage();

	//Calcula a média da classe de acordo com as 10 notas inseridas pelo usuário.
	void determineClassAverage();

	//insere números arbitrários de notas do usuário.
	void inputGrades();

	//Exibe um relatório baseado nas notas.
	void displayGradeReport();
};