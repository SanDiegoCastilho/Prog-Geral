//San Diego - 26/05/2020
// Testando a classe date.

public class DateTest{
	public static void main(String args[]){

		//Criando objeto corretamente.
		Date nascimento1 = new Date(15, 03, 1998);

		nascimento1.displayDate();

		//Alterando a data
		nascimento1.setDay(20);
		nascimento1.setYear(1994);
		nascimento1.setMonth(04);
		nascimento1.displayDate();

		//Criando objeto incorretamente.
		Date nascimento2 = new Date(30, 02, 1997);

		//Alterando a data incorrretamente
		nascimento2.setDay(73);
		nascimento2.setMonth(23);
		nascimento2.displayDate();
	}
}