//1. Escriba un programa en lenguaje C que permita convertir �N� n�mero de pulgadas ingresadas por el usuario a cent�metros. (1pulgada = 2.54 cent�metros)


#include<stdio.h>


	main(){
		
		double in, cm;

	printf("\n\t Pulgadas a centimetros");
	printf("\n\t **********************");
	
	
	printf("\n Ingrese las pulgadas a convertir.");
	scanf("%lf",&in);
	
	
	cm= in * 2.54;
	
	printf("\n El numero de centimetros es: %lf \n\n", cm);
	


}
