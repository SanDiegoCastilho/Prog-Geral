//San Diego - 21/05/2020
// Escreva um aplicativo que insira três inteiros digitados pelo usuário e exiba a soma, média, produto e os
//números menores e maiores.

import java.util.Scanner;

public class MaiorMenor{
	public static void main(String args[]){

		Scanner input = new Scanner(System.in);
		int number1, number2, number3, average, sum, product, bigger, smaller;

		System.out.print("Digite o primeiro número: ");
		number1 = input.nextInt();

		System.out.print("Digite o segundo número: ");
		number2 = input.nextInt();

		System.out.print("Digite o terceiro número: ");
		number3 = input.nextInt();

		//Soma dos números
		sum = number1 + number2 + number3;

		//Média dos números
		average = sum/3;

		//Produto dos números
		product = number1 * number2 * number3;

		//Determina quem é o maior e o menor.
		if (number1 > number2){

			if (number1 > number3){
				bigger = number1;

				//Determina o menor.
				if (number2 > number3){
					smaller = number3;

				}else{
					smaller = number2;
				}

			}else{
				bigger = number3;
				smaller = number2;
			}

		}else{

			if (number2 > number3){
				bigger = number2;
				smaller = number1;

			}else{
				bigger = number3;
				smaller = number1;
			}
		}

		//Mostrando Resultados:
		System.out.println("A soma vale: " + sum);
		System.out.println("A média é: " + average);
		System.out.println("O produto vale: " + product);
		System.out.println("O maior número é: " + bigger);
		System.out.println("O menor número é: " + smaller);

	}
}