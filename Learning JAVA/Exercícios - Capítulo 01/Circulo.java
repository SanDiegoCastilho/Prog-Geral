//San Diego - 21/05/2020
//Escreva um aplicativo que leia a entrada a partir do usuário do raio de um círculo como um inteiro e imprima o diâmetro do círculo,
//circunferência e área

import java.util.Scanner;

public class Circulo{
	public static void main(String args[]){

		Scanner input = new Scanner(System.in);
		double raio, diametro, circunferencia, area;

		//Receb a entrada (Raio)
		System.out.print("Entre com o Raio (cm): ");
		raio = input.nextDouble();

		//Calcula os resultados
		diametro = 2 * raio;	

		circunferencia = 2 * Math.PI * raio;

		area = Math.PI * raio * raio;

		//Mostrando os resultados:
		System.out.println("O diâmetro do círculo vale: " + diametro + " (cm)");
		System.out.println("A circunferência do círculo vale: " + circunferencia + " (cm)");
		System.out.println("A área do círculo vale: " + area + " (cm²)");
	}
}