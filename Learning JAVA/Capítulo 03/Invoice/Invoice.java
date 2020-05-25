//San Diego - 24/05/2020
// Classe que representa a fatura de uma loja de informática

public class Invoice{

	//Variáveis de instância
	private String number;
	private String description;
	private int amount;
	private double price;

	//Construtor
	public Invoice (String number, String description, int amount, double price){

		this.number = number;
		this.description = description;

		if (amount > 0 && price > 0.0) {
			this.amount = amount;
			this.price  = price;
		}
	}


	//Getters e Setters dos atributos
	public void setNumber(String number){
		this.number = number;
	}

	public String getNumber(){
		return number;
	}

	public void setDescription(String description){
		this.description = description;
	}

	public String getDescription(){
		return description;
	}

	public void setAmount(int amount){

		if (amount > 0)
			this.amount = amount;
	}

	public int getAmount(){
		return amount;
	}

	public void setPrice(double price){

		if (price > 0.0)
			this.price = price;
	}

	public double getPrice(){
		return price;
	}

	//Calcula o valor total da fatura
	public double getInvoiceAmount(){
		double invoiceAmount;

		invoiceAmount = (getPrice() * getAmount());

		return invoiceAmount;
	}

}