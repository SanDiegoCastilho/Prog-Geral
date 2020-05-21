//San Diego - 21/05/2020
//Escreva um aplicativo que leia um inteiro, além de determinar e imprimir se ele é ímpar ou par. [Dica: utilize o operador
//de resto. 

import java.util.Scanner;

public class ImparPar{
	public static void main(String args[]){

		Scanner input = new Scanner(System.in);
		int num;

		//Recebe entrada
		System.out.print("Digite um número: ");
		num = input.nextInt();

		//Verifica e mostra o resultado.
		if ((num % 2) == 0)
			System.out.println(num + " é par!");

		else
			System.out.println(num + " é ímpar!");
	}
}