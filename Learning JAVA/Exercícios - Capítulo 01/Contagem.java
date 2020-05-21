//San Diego - 21/05/2020
// Escreva um programa que insira cinco números, além de determinar e imprimir quantos negativos,
// quantos positivos e quantos zeros foram inseridos.

import java.util.Scanner;

public class Contagem{
	public static void main(String args[]){

		Scanner input = new Scanner(System.in);
		int numAux, numNeg = 0, numPos = 0, numZero = 0;

		//Recebe os valores: 
		System.out.print("Digite o primeiro número: ");
		numAux = input.nextInt();

		if (numAux < 0)
			numNeg++;

		if (numAux > 0)
			numPos++;

		if (numAux == 0)
			numZero++;

		System.out.print("Digite o segundo número: ");
		numAux = input.nextInt();

		if (numAux < 0)
			numNeg++;

		if (numAux > 0)
			numPos++;

		if (numAux == 0)
			numZero++;

		System.out.print("Digite o terceiro número: ");
		numAux = input.nextInt();

		if (numAux < 0)
			numNeg++;

		if (numAux > 0)
			numPos++;

		if (numAux == 0)
			numZero++;

		System.out.print("Digite o quarto número: ");
		numAux = input.nextInt();

		if (numAux < 0)
			numNeg++;

		if (numAux > 0)
			numPos++;

		if (numAux == 0)
			numZero++;

		System.out.print("Digite o quinto número: ");
		numAux = input.nextInt();

		if (numAux < 0)
			numNeg++;

		if (numAux > 0)
			numPos++;

		if (numAux == 0)
			numZero++;

		//Mostrando resultados:
		System.out.println("O número de números positivos é: " + numPos);
		System.out.println("O número de números negativos é: " + numNeg);
		System.out.println("O número de zero é: " + numZero);

	}
}