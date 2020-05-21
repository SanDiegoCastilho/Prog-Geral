//San Diego - 10/05/2020
//Adiciona dois inteiros.
import java.util.Scanner;

public class Addition{
	public static void main(String args[]){

		Scanner input = new Scanner(System.in);
		int number1, number2, sum;

		//Recebe o primeiro número
		System.out.print("Digite o 1º número: ");
		number1 = input.nextInt();

		//Recee o segundo número
		System.out.print("Digite o 2º número: ");
		number2 = input.nextInt();

		sum = number1 + number2;

		System.out.println("A soma vale: " + sum);
	}
}