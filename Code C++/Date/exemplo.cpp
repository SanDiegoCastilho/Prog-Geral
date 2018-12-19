#include <iostream>
	
using namespace std;

int main(){

	int grade = 6;

	cout << (grade >= 6 ? "Passou" : "Reprovado") << endl;

	grade >= 6 ? cout << "passou" : cout << "Reprovado"; 

	return 0;
}