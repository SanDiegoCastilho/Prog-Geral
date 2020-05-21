//San Diego - 14/05/2020
// Escreva um aplicativo que solicite ao usuário inserir dois inteiros, obtenha dele esses números e exiba o número
// maior seguido pelas palavras “is larger". Se os números forem iguais, imprima a mensagem “These numbers are equal".

import java.util.Scanner;

public class ComparaInteiros{
	public static void main(String args[]){

		Scanner input = new Scanner(System.in);
		int number1, number2;

		System.out.print("Digite o primeiro inteiro: ");
		number1 = input.nextInt();

		System.out.print("Digite o segundo inteiro: ");
		number2 = input.nextInt();

		if(number1 > number2)
			System.out.println(number1 + " é maior do que " + number2);

		if(number1 < number2)
			System.out.println(number2 + " é maior do que "+ number1);

		if(number1 == number2)
			System.out.println(number1 + " é ingual " + number2);

	}
} 