//San Diego - 20/09/2019.
//Exercício 2.35 - Faixa Solidária.
import java.util.Scanner;

public class FaixaSolidaria{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);

		double distanciaTotal, precoLitro, distanciaMedia, taxaEstacionamento, pedagio, custoCombustivel, custoTotal;

		System.out.print("Digite a distancia total percorrida até o trabalho: (km) ");
		distanciaTotal = input.nextDouble();

		System.out.print("Digite preço por litro de gasolina: (R$) ");
		precoLitro = input.nextDouble();

		System.out.print("Digite a distância média por litro: (km) ");
		distanciaMedia = input.nextDouble();

		System.out.print("Digite o valor da taxa de estacionamento diário: (R$) ");
		taxaEstacionamento = input.nextDouble();

		System.out.print("Digite o valor do pedágio diário: (R$) ");
		pedagio = input.nextDouble();

		custoCombustivel = (distanciaTotal/distanciaMedia) * precoLitro;

		custoTotal = taxaEstacionamento + pedagio + custoCombustivel;

		System.out.println("O gasto total diário é de: " + custoTotal + " R$");
	}
}