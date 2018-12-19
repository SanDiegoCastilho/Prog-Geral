//San Diego  - modificado - 19/12/2018 - 15:00
//Criando uma classe Analysis.
#include <iostream>
#include "Analysis.h"

using namespace std;

void Analysis::processExamResults(){
	int passes = 0, failures = 0; //Número de aprovações e reprovações.
	int studentCounter = 1; //Contador de alunos.
	int result; //Resultado de um teste (1 = aprovado, 2 = reprovado).

	while(studentCounter <= 10){
		cout << "Insira um resultado (1 = Aprovado, 2 = Reprovado): ";
		cin >> result;

		//Conta o número de aprovados e reprovados.
		if (result == 1)
			passes += 1;

		else
			failures += 1;

		studentCounter += 1;
	}	

	//Exibe o número de aprovados e reprovados.
	cout << "Aprovados:  " << passes << endl;	
	cout << "Reprovados: " << failures << endl;

	//Verifica se mais de 8 alunos foram aprovados.
	if (passes >= 8)
		cout << "Aumentar a mensalidade";
}