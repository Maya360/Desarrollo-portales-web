//2. Escriba un programa en lenguaje C que permita realizar determinar cu�ntas horas, minutos y segundos hay en �N� n�mero de d�as ingresados por el usuario.

#include<stdio.h>


	main(){
	int dias;
	int horas= 24;
    int minutos= 1440;
	int segundos= 86400;
		
	printf("\n\t Horas, minutos y segundos en un dia.");
	printf("\n\t ************************************");
	
	
	printf("\n Ingrese la cantidad de dias a calcular.");
	scanf("%d",&dias);
	
	horas = dias* horas;
	minutos= minutos*dias;
	segundos = segundos* dias;
	
	printf("\n En %d dias hay...", dias);
	printf("\n horas: %d",horas);
    printf("\n minutos: %d",minutos);
	printf("\n segundos: %d \n\n",segundos);	
	
	return 0;
		
		
		
	}

