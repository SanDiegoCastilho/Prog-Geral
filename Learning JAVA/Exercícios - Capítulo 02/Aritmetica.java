//San Diego - 14/05/2020
//Escreva um aplicativo que solicite ao usuário inserir dois inteiros, obtenha dele esses números e imprima sua soma, produto, 
//diferença e quociente (divisão). 

import java.util.Scanner;

public class Aritmetica{
	public static void main(String args []){

		Scanner input = new Scanner(System.in);
		int number1, number2, product, sum, quotient, deference;

		System.out.print("Digite o primeiro número: ");
		number1 = input.nextInt();

		System.out.print("Digite o segundo número: ");
		number2 = input.nextInt();

		//Aritmética
		if (number1 <= number2){
			deference = number2 - number1;
			quotient = number2 / number1;

		}else{
			deference = number1 - number2;
			quotient = number1 / number2;
		}

		sum = number1 + number2;
		product = number1 * number2;

		System.out.println();


		//Mostrando resultado
		System.out.println("--------------------------------------");
		System.out.println("A Soma vale: " + sum);
		System.out.println("O produto vale: " + product);
		System.out.println("A diferença vale: " + deference);
		System.out.println("O quociente vale: " + quotient);
		System.out.println("--------------------------------------");
	}	
}