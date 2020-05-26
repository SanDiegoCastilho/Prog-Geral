//San Diego - 26/05/2020
// Classe data

public class Date{

	//Variáveis de instância
	private int day;
	private int month;
	private int year;

	//Construtor Date
	public Date(int day, int month, int year){

		//Atribui o ano
		this.year = year;

		//Atribui o mês de forma válida
		if ((month >= 1) && (month <= 12)){
			this.month = month;

		}else{

			System.out.println("Mês inválido");
			this.year = 1;
		}


		//Atribui o dia dependendo do mês; Meses com 31 dias.
		if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)) {

			if ((day >= 1) && (day <= 31)){
				this.day = day;

			}else{

				System.out.println("Dia inválido");
				this.day = 1;
			}
		}


		//Meses com 30 dias.
		if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) {

			if ((day >= 1) && (day <= 30)){
				this.day = day;

			}else{
				System.out.println("Dia inválido");
				this.day = 1;
			}
		}


		//Caso de Fevereiro.
		if (month == 2){

			//Caso ano bissexto
			if (year % 4 == 0){

				if ((day >= 1) && (day <= 29)){
					this.day = day;

				}else{
					System.out.println("Dia inválido");
					this.day = 1; 
				}

			}else{

				if ((day >= 1) && (day <= 28)){
					this.day = day;

				}else{
					System.out.println("Dia inválido");
					this.day = 1; 
				}
			}
		}
	}

	//Getters e Setters
	public void setYear(int year){
		this.year = year;
	}

	public int getYear(){
		return year;
	}

	public void setMonth(int month){
		if ((month >= 1) && (month <= 12)){
			this.month = month;

		}else{

			System.out.println("Mês inválido");
			this.year = 1;
		}
	}

	public int getMonth(){
		return month;
	}

	public void setDay(int day){

		//Atribui o dia dependendo do mês; Meses com 31 dias.
		if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)) {

			if ((day >= 1) && (day <= 31)){
				this.day = day;

			}else{

				System.out.println("Dia inválido");
				this.day = 1;
			}
		}


		//Meses com 30 dias.
		if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) {

			if ((day >= 1) && (day <= 30)){
				this.day = day;

			}else{
				System.out.println("Dia inválido");
				this.day = 1;
			}
		}


		//Caso de Fevereiro.
		if (month == 2){

			//Caso ano bissexto
			if (year % 4 == 0){

				if ((day >= 1) && (day <= 29)){
					this.day = day;

				}else{
					System.out.println("Dia inválido");
					this.day = 1; 
				}

			}else{

				if ((day >= 1) && (day <= 28)){
					this.day = day;

				}else{
					System.out.println("Dia inválido");
					this.day = 1; 
				}
			}
		}
	}

	public int getDay(){
		return day;
	}

	//Mostra a Data na tela formatada com barras
	public void displayDate(){

		System.out.println();
		System.out.println("=============================");
		System.out.println(getDay() + "\\" + getMonth() + "\\" + getYear());
		System.out.println("=============================");
		System.out.println();
	}


}