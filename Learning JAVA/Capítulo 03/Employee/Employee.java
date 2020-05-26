//San Diego - 25/05/2020
// Classe de funcionário

public class Employee{

	//Variáveis de instância.
	private String firstName;
	private String lastName;
	private double salary;

	//Construtor da classe.
	public Employee(String firstName, String lastName, double salary){

		this.firstName = firstName;
		this.lastName = lastName;

		if (salary > 0.0)
			this.salary = salary;
	}

	//Getters e Setters das variáveis de instância
	public String getFirstName(){
		return firstName;
	}

	public void setFirstName(String firstName){
		this.firstName = firstName;
	}

	public String getLastName(){
		return lastName;
	}

	public void setLastName(String lastName){
		this.lastName = lastName;
	}

	public double getSalary(){
		return salary;
	}

	public void setSalary(double salary){
		this.salary = salary;
	}


	}