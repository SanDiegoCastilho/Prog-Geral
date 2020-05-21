//San Diego - 21/05/2020
//Escreva um aplicativo que leia cinco inteiros, além de determinar e imprimir o maior e o menor inteiro
//no grupo.

import java.util.Scanner;

public class MaiorMenor2{
	public static void main(String args[]){

		Scanner input = new Scanner(System.in);
		int num1, num2, num3, num4, num5, bigger = 0, smaller = 0;

		//Recebe entradas
		System.out.print("Digite o primeiro número: ");
		num1 = input.nextInt();

		System.out.print("Digite o segundo número: ");
		num2 = input.nextInt();

		System.out.print("Digite o terceiro número: ");
		num3 = input.nextInt();

		System.out.print("Digite o quarto número: ");
		num4 = input.nextInt();

		System.out.print("Digite o quinto número: ");
		num5 = input.nextInt();

		//Determina maior
		if ((num1 > num2) && (num1 > num3) && (num1 > num4) && (num1 > num5))
			bigger = num1;

		if ((num2 > num1) && (num2 > num3) && (num2 > num4) && (num2 > num5))
			bigger = num2;

		if ((num3 > num2) && (num3 > num1) && (num3 > num4) && (num3 > num5))
			bigger = num3;

		if ((num4 > num2) && (num4 > num3) && (num4 > num1) && (num4 > num5))
			bigger = num4;

		if ((num5 > num2) && (num5 > num3) && (num5 > num4) && (num5 > num1))
			bigger = num5;

		//Determina o menor
		if ((num1 < num2) && (num1 < num3) && (num1 < num4) && (num1 < num5))
			smaller = num1;

		if ((num2 < num1) && (num2 < num3) && (num2 < num4) && (num2 < num5))
			smaller = num2;

		if ((num3 < num2) && (num3 < num1) && (num3 < num4) && (num3 < num5))
			smaller = num3;

		if ((num4 < num2) && (num4 < num3) && (num4 < num1) && (num4 < num5))
			smaller = num4;

		if ((num5 < num2) && (num5 < num3) && (num5 < num4) && (num5 < num1))
			smaller = num5;		

		//Mostra o resultado
		System.out.println("O maior número é: " + bigger);
		System.out.println("O menor número é: " + smaller);
	}
}