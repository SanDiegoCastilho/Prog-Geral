//San Diego - 21/05/2020
//Escreva um aplicativo que insira um número consistindo em cinco dígitos a partir do usuário,
//separe o número em seus dígitos individuais e imprima os dígitos separados uns dos outros por três espaços. 

import java.util.Scanner;

public class SeparaDigitos{
	public static void main(String args[]){

		Scanner input = new Scanner(System.in);
		int num, dig1, dig2, dig3, dig4, dig5;

		//Recebendo entrada.
		System.out.print("Digite a entrada: ");
		num = input.nextInt();

		//Separa os dígitos
		dig5 = num % 10;
		dig4 = (num % 100)/10;
		dig3 = (num % 1000)/100;
		dig2 = (num % 10000)/1000;
		dig1 = (num % 100000)/10000;

		//Mostra o resultado	
		System.out.println(dig1 + " " + dig2 + " " + dig3 + " " + dig4 + " " + dig5);
	}
}