//San Diego - 20/09/2019
//Exercício 2.34 - Crescimento populacional.
import java.math.*;

public class CrescimentoPopulacional{
	public static void main(String [] args){
		BigDecimal populacaoAtual = new BigDecimal("7700000000");

		System.out.println("População atual: " + populacaoAtual);

		for (int i = 0; i <= 2; i++) {
			populacaoAtual = populacaoAtual.add(populacaoAtual.multiply(BigDecimal.valueOf(0.0117)));
			System.out.println("População daqui a " + i + " ano: " + populacaoAtual);	
		}
	}
}		