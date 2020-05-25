//San Diego - 22/05/2020

public class Account{
	//Variável de instância
	private String name;
	private double balance;

	public Account(String name, double balance){
		this.name = name;

		if (balance > 0.0)
			this.balance = balance;
	}

	//Define o nome da conta
	public void setName(String name){
		this.name = name;
	}

	//Recupera o nome da conta.
	public String getName(){
		return name;
	}

	//Deposita valor na conta
	public void deposit(double depositAmount){

		if (depositAmount > 0.0)
			balance = balance + depositAmount;
	}

	//Retira valor da conta
	public void withdraw(double value){

		if (value <= getBalance()){

			System.out.println("Retirando " + value + " Reais da conta...");
			balance = balance - value;
			System.out.println("Saldo atual: " + getBalance());

		}else{
			System.out.println("O valor de débito excede o saldo da conta!");
			System.out.println();
		}
	}

	//Retorna o saldo da conta
	public double getBalance(){

		return balance;
	}
}