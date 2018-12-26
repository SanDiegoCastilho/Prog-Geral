//San Diego  - modificado - 25/12/2018 - 12:26
//Introdução a Orientação a Objetos com C++.
//Utiliza uma instrução switch para contar as notas A, B, C, D e F

#include <iostream>
#include <iomanip>
#include "GradeBook.h"

using namespace std;

//O construtor inicializa courseName com uma string passada como argumento.
GradeBook::GradeBook(string nameCourse, string nameInstructor){
	setCourseName(nameCourse);
	setInstructorName(nameInstructor);
	aCount = 0;
	bCount = 0;
	cCount = 0;
	dCount = 0;
	eCount = 0;
	fCount = 0;
}

//Função responsável por guardar o nome do curso.
void GradeBook::setCourseName(string name){ //Valida e Armazena o nome do curso no objeto.
	
	if (name.length() <= 26){
		CourseName = name; //Armazena o nome do curso no objeto.

	}else{
		CourseName = name.substr(0, 25); //Armazena os primeiros 25 caracteres

		cout << "Name \"" << name << "\" exceeds maximum length (25). \n" 
			 << "Limiting courseName to first 25 charracteres. \n" << endl; 
	}

}
	
//Guarda o nome do instrutor.
void GradeBook::setInstructorName(string name){
	InstructorName = name;
}

//Função responsável por obter o nome do curso.
string GradeBook::getCourseName (){
	return CourseName; //Retorna o courseName do objeto.
}

//Retorna o nome do instrutor;
string GradeBook::getInstructorName(){
	return InstructorName;
}

//Função que imprime uma mensagem na tela.
void GradeBook::displayMessage(){
	cout << "Welcome To The Grade Book!" << endl;
	cout << "Curso: " << getCourseName() << endl;
	cout << "Instrutor: " << getInstructorName() << endl;

}
	
//Calcula e mostra a média de 10 notas inseridas pelo usuário.
void GradeBook::determineClassAverage(){
	int total, grade = 0; //Definindo total das notas, média das notass e nota individual;
	int gradeCounter = 0; //Nota inserida pelo usuário.
	double average; //Valor da média.

	//Inicializa o valor da primeira nota.
	cout << "Digite a " << gradeCounter + 1 << "ª nota ou -1 para sair: ";
	cin >>  grade;

	//Calcula o valor total das notas e atribui à 'total'.
	while (grade != -1){
		total += grade;
		gradeCounter += 1;

		//Solicita a entrada das notas pelo usuário.
		cout << "Digite a " << gradeCounter + 1 << "ª nota ou -1 para sair: ";
		cin >>  grade;
	}

	//Calcula a média.
	if (gradeCounter != 0){
		average = static_cast<double>(total) / gradeCounter; //Converte temporariamente Total para double e calcula a média.
	}

	//Mostra os resultados.
	cout << "\nTotal das " << gradeCounter <<" notas inseridas é: " << total << endl;
	cout << "A média da turma vale: " << setprecision(2) << fixed <<  average << endl;
}

//Insere notas arbitrárias ao usuário.
void GradeBook::inputGrades (){
	int grade; //Nota inserida pelo usuário.

	cout << "Enter the letter grades." << endl 
		 << "Enter the EOF character to the end input."; 

	while(grade = cin.get() != eof()){
		//Determina a nota que foi inserida.
		switch(grade){
			case 'A':
			case 'a':
				aCount++;
				break;

			case 'B':
			case 'b':
				bCount++;
				break;

			case 'C':
			case 'c':
				cCount++;
				break;

			case 'D':
			case 'd':
				dCount++;
				break;

			case 'E':
			case 'e':
				eCount++;
				break;

			case 'F':
			case 'f':
				fCount++;
				break;

			case '\n':
			case '\t':
			case ' ':
				break;

			default:
				cout << "Incorrect letter grade entered"  << endl
					 << "Enter a new grade." << endl;
				break;
		}
	}

} 

//Exibe um relatório baseado nas notas inseridas pelo usuário.
void GradeBook::displayGradeReport(){
	//Gera a saída de resultados.
	cout << "Number  os students who received each letter grade:" << endl
		 << "A: " << aCount
		 << "B: " << bCount
		 << "C: " << cCount
		 << "D: " << dCount
		 << "E: " << eCount
		 << "F: " << fCount
		 << endl;
}