//Convertir una temperatura en grados Celsius ingresada por el usuario a grados Fahrenheit (°F = 9/5 * °C + 32).


#include<stdio.h>

main(){
	
	double celcius, fahrenheit;
	
	printf("\n\t Celcius a Fahrenheit");
	printf("\n\t *******************");
	
	printf("\n Ingrese la temperatura en Celcius a calcular: ");
	scanf("%lf",&celcius);
	
	fahrenheit= (celcius*9/5)+32; //Use de referencia google para verificar que los datos esten correctos
	
	
	printf("\n La temperatura es de %.2lf F \n\n",fahrenheit);
	
	
	return 0;
	}
	
