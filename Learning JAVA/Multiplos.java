//San Diego - 21/05/2020
//Escreva um aplicativo que leia dois inteiros, além de determinar se o primeiro é um múltiplo do segundo e imprimir o resultado.

import java.util.Scanner;

public class Multiplos{
	public static void main(String args[]){

		Scanner input = new Scanner(System.in);
		int num1, num2;

		//Recebe os dados
		System.out.print("Digite o primeiro númro: ");
		num1 = input.nextInt();

		System.out.print("Digite o segundo númro: ");
		num2 = input.nextInt();

		//Determinando de o primeiro é múltiplo do segundo
		if ((num1 % num2) == 0)
			System.out.println(num1 + " é múltiplo de " + num2);

		else
			System.out.println(num1 + " não é múltiplo de " + num2);
	}
}