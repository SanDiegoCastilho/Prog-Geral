//San Diego - 22/05/2020
//Classe condutora de teste para a classe account.

import java.util.Scanner;

public class AccountTest{
	public static void main(String args[]){

		Scanner input = new Scanner(System.in);
		String theName;
		double depositAmount;

		//Cria duas contas
		Account myAccount1 = new Account("San Diego", 50.5);
		Account myAccount2 = new Account("João Maria", 7.80);

		//Exibe as informações inicais da criação das contas
		System.out.println("Nome inicial da conta1: " + myAccount1.getName());
		System.out.println("Saldo inicial da conta1: " + myAccount1.getBalance());

		System.out.println("Nome inicial da conta2: " + myAccount2.getName());
		System.out.println("Saldo inicial da conta2: " + myAccount2.getBalance());
		System.out.println();

		//Adiciona saldo para as contas
		System.out.print("Entre com deposito para a conta 1: ");
		depositAmount = input.nextDouble();

		System.out.println("Depositando " + depositAmount + " Reais na conta 01");
		myAccount1.deposit(depositAmount);

		System.out.print("Entre com deposito para a conta 2: ");
		depositAmount = input.nextDouble();

		System.out.println("Depositando " + depositAmount + " Reais na conta 01");
		myAccount2.deposit(depositAmount);
		System.out.println();

		//Mostra o nome da conta
		System.out.println("O nome atual da conta 1 é: " + myAccount1.getName());
		System.out.println("O saldo atual da conta 1 é: " + myAccount1.getBalance());
		System.out.println("O nome atual da conta 2 é: " + myAccount1.getName());
		System.out.println("O saldo atual da conta 2 é: " + myAccount2.getBalance());

		//Testando do método de débito
		myAccount1.withdraw(30);
	}
}