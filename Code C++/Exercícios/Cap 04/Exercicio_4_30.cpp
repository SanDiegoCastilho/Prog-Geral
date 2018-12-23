//San Diego - 23/12/2018 - 13:10.
//Exercício 4.30.
#include <iostream>
#include <cmath>

#define PI 3.14159

using namespace std;

int main(){
	double Ray, Circumference, Diameter, Area;

	cout << "Digite o valor do Raio (cm): ";
	cin >> Ray;

	Diameter = 2 * Ray;
	Area = PI * pow(Ray, 2);
	Circumference = 2 * PI * Ray;

	cout << "Diâmetro: " << Diameter << " cm" << endl;
	cout << "Circunferência: " << Circumference << " cm" << endl;
	cout << "Área: " << Area << " cm²" << endl;

	return 0;
}