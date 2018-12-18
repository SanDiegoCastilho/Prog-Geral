//San Diego - 18/12/2018 - 14:13.
//Exercício 2.20
#include <iostream>
#include <cmath> 
#define PI 3.14159;

using namespace std;

int main(){
	double Ray, Area;

	cout << "Digite o valor do Raio: ";
	cin >> Ray;

	Area = pow(Ray, 2) * PI;

	cout << "A área da circunferÊncia vale: " << Area << endl; 

	return 0;
}