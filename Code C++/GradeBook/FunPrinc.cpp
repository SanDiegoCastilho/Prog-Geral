//San Diego - 12/12/2018 - 13:00.
//Introdução a classes e objetos.
// Separando interfaces de implementação.
#include <iostream>

// #include "GradeBook.h"
#include "Analysis.h"

using namespace std;

int main(){

	// GradeBook gradebook1("Ciencia da Computação", "San Diego");
	// GradeBook gradebook2("Engenharia da Computação", "Francisco");

	// gradebook1.displayMessage();
	// gradebook1.determineClassAverage();

	//Teste para a classe Analysis.
	cout << "Classe Analysis" << endl;

	Analysis application;
	application.processExamResults();

	return 0;
}