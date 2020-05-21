//San Diego - 20/09/19.
//Exercício 2.33 - Cálculo IMC
import java.util.Scanner;

public class CalculoIMC{
	public static void main(String[] args){

		Scanner input = new Scanner(System.in);
		double altura, imc, peso;

		System.out.print("Digite sua altura: (m) ");
		altura = input.nextDouble();

		System.out.print("Digite seu peso: (kg) ");
		peso = input.nextDouble();

		imc = (peso / (altura*altura));

		if (imc < 18.5) {
			System.out.println("IMC = " + imc);
			System.out.println("Abaixo do Peso.");
		}

		if (imc >= 18.5 && imc < 24.9) {
			System.out.println("IMC = " + imc);
			System.out.println("Peso normal.");
		}

		if (imc >= 24.9 && imc < 29.9) {
			System.out.println("IMC = " + imc);
			System.out.println("Acima do peso.");
		}

		if (imc >= 29.9) {
			System.out.println("Obeso.");
		}

	}
}