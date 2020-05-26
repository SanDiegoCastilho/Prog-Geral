//San Diego - 26/05/2020
// Classe de teste da classe Employee

public class EmployeeTest{
	public static void main(String args[]){

		Employee empregado1 = new Employee("San Diego", "Castilho", 900);
		Employee empregado2 = new Employee("João", "Almeida", 2000);

		//Exibe o salário anual de cada empregado.
		System.out.println();
		System.out.println("Salário anual do " + empregado1.getFirstName() + ": " + empregado1.getSalary() * 12);
		System.out.println("Salário anual do " + empregado2.getFirstName() + ": " + empregado2.getSalary() * 12);
		System.out.println();

		//Aumentando cada funcionário.
		empregado1.setSalary(990);
		empregado2.setSalary(2200);

		//Exibe o salário anual de cada empregado aumentado.
		System.out.println();
		System.out.println("Salário anual do " + empregado1.getFirstName() + ": " + empregado1.getSalary() * 12);
		System.out.println("Salário anual do " + empregado2.getFirstName() + ": " + empregado2.getSalary() * 12);
		System.out.println();
	}
}