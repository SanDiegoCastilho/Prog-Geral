//San Diego - 25/05/2020
// Testando a classe Invoice

public class InvoiceTest{
	public static void main(String args[]){

		//Criando duas faturas
		Invoice notaFiscal1 = new Invoice("123 - 5", "Lapiseira azul claro", 2, 20.00);
		Invoice notaFiscal2 = new Invoice("123 - 3", "Resma de folha A4", 3, 24.90);

		//Mostrando o resultado inicial
		System.out.println();
		System.out.println(" ============ Compra 1 ============ ");
		System.out.println("Numero:     " + notaFiscal1.getNumber());
		System.out.println("Descrição:  " + notaFiscal1.getDescription());
		System.out.println("Quantidade: " + notaFiscal1.getAmount());
		System.out.println("Preço:      " + notaFiscal1.getPrice());
		System.out.println("TOTAL:      " + notaFiscal1.getInvoiceAmount());
		
		System.out.println();

		System.out.println(" ============ Compra 2 ============ ");
		System.out.println("Numero:     " + notaFiscal2.getNumber());
		System.out.println("Descrição:  " + notaFiscal2.getDescription());
		System.out.println("Quantidade: " + notaFiscal2.getAmount());
		System.out.println("Preço:      " + notaFiscal2.getPrice());
		System.out.println("TOTAL:      " + notaFiscal2.getInvoiceAmount());
		System.out.println();

	}
}